/*
*Model.cpp
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a class to determine averages of thread and process creation
*/
#include "Model.h"
using namespace std;


//function to print out thread id's
void*  Model::PrintMsg(void *threadid) {
   	long lthreadid = (long)threadid;
   	printf("Hello from the child thread (TID = #%ld)\n" ,lthreadid );
   	pthread_exit(NULL);
}
/* function to find the average time needed to create a thread
*takes in a integer number of trials
*returns the average as a double
*/
double Model::threadTiming(int repeat){
	double total_time = 0;
	//create timer
	NanoTimer timer = NanoTimer();
   	pthread_t threads[1];
   	for(int i = 0; i < repeat; i++ ) {
		timer.start();
		//find the time to create a thread (waits for it to complete in each iteration outside of timing)
		for(int j=0;j<1;j++){
      			pthread_create(&threads[j], NULL, &PrintMsg, (void*) (intptr_t)i);
			timer.stop();
			total_time+=timer.getTotalTime();
			timer.reset();
			pthread_join(threads[j],NULL);
		}
		
	}
	return (total_time/ (double)repeat);
}
/* function to find the average time needed to create a process
*takes in a integer number of trials
*returns the average as a double
*/
double Model::processTiming(int repeat) {
	double total_time = 0;
	//create timer
	NanoTimer timer = NanoTimer();
	for(int i =0; i<repeat;i++){
		pid_t child_pid;
		timer.start();
		//have child print out a message and then exit
		if ((child_pid = fork()) == 0){
    			printf("Hello from the child process (PID = %d)\n" ,getpid() );
   			exit(1);            	}
		//have parent stop timer and add to total time
		timer.stop();
		total_time+=timer.getTotalTime();
		timer.reset();
	}
	usleep(2000*repeat);		
	return total_time/ (double)repeat;
}
