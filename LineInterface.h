/*
*LineInterface.h
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a class to handle commandline interface
*
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
//Class declaration for LineInterface
class LineInterface{
	public:
	LineInterface();
	void printNoRun();
	void printNotNum();
	void printTiming(string typeName, double time); 
};

