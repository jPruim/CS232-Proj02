/*
*TextInterface.h
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
class TextInterface{
	public:
	TextInterface();
	void printNoRun();
	void printTiming(string typeName, double time);
	void printMenu();
	void printRepeat();
	void printType(string typeName);
	string getResponse();
	void printInvalid();
	void printNotNum();
	void printStatus(int repeat, bool process, bool thread);
};

