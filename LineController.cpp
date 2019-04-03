/*
*LineController.cpp
*Made By Jason Pruim 
*Feb 24, 2019
*For CS232 at Calvin College
*a class to run the model class
*and print out results
*/


#include "LineController.h"

using namespace std;

LineController::LineController(int argc, char* argv[]){
	process = false; thread = false; repeat = 5;
	for(int i = 0; i < argc;i++){
		string currentVar = string(argv[i]);
		if(currentVar == "-p" ||currentVar =="-process"){
			process = true;
		}
		else if(currentVar == "-t" ||currentVar =="-thread"){
			thread = true;
		}
		else if(currentVar.substr(0,2)=="-r"){
			try{repeat = stoi(currentVar.substr(2,string::npos));}
			catch(...){lI.printNotNum();};
		}
	}
	LineInterface lI = LineInterface();

}
/*void run
* receives NONE
* to create threads/processes to determine the average
* runs the timings through model and tells Line Interface to print the average timings
*/
void LineController::run(){
	if(!thread && !process){      
		lI.printNoRun();
		return;
	}
	Model m;
	double timing = 0;	
	if(thread){
		timing = m.threadTiming(repeat);
		lI.printTiming("threads",timing);
	}
	if(process){
		timing = m.processTiming(repeat);
		lI.printTiming("processes",timing);
	}
}

