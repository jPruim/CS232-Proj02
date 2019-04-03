/*
*Model.h
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a class to determine averages of thread and process creation
*/

#ifndef FILE_Model
#define FILE_Model

#include <iostream>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <cstdlib>
#include <pthread.h>
#include "NanoTimer.h"

using namespace std;

//Class to run the Model of timings
class Model {
	static void* PrintMsg(void *threadid);
	public:
		double processTiming(int repeat);
		double threadTiming(int repeat);
};


#endif /* !FILE_Model */
