
/*
*LineController.h
*Made By Jason Pruim 
*Feb 24, 2019
*For CS232 at Calvin College
*a class to run the model class
*and print out results
*/
#ifndef FILE_LC
#define FILE_LC

#include "Model.h"
#include <iostream>
#include "LineInterface.h"
using namespace std;

/*class declaration for Controller*/
class LineController{
	public:
	bool process;
	bool thread;
	int repeat;
	LineInterface lI;
	public:
	LineController(int argc, char* argv[]);
	void run();

};
#endif /* !FILE_LC */
