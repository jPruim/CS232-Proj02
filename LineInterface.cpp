/*
*LineInterface.cpp
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a class to handle commandline interface
*
*/

#include "LineInterface.h"
using namespace std;

//empty constructor
LineInterface::LineInterface(){



}
/*
*printNoRun()
*cerr's a message saying no process or threads asked for
*/
void LineInterface::printNoRun()
{
	cerr << "Usage: must either run process or threads" << endl;
}
/*
*printTimng(string typeName, double time)
*prints's a message saying timing for typeName(s) to run
*/
void LineInterface::printTiming(string typeName, double time)
{
	cout<< "The average time to create "<<typeName<<" is: "<<time<<endl;
}

//printNotNum()----print invalid command msg
void LineInterface::printNotNum()
{
	cout<<"input of -r was not a number"<<endl;

}


