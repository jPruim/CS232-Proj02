/*
*TextInterface.cpp
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a class to handle commandline interface
*
*/

#include "TextInterface.h"
using namespace std;

//empty constructor
TextInterface::TextInterface(){



}
/*
*printNoRun()
*cerr's a message saying no process or threads asked for
*/
void TextInterface::printNoRun()
{
	cerr << "Usage: must either run process or threads" << endl;
}
/*
*printTimng(string typeName, double time)
*prints's a message saying timing for typeName(s) to run
*/
void TextInterface::printTiming(string typeName, double time)
{
	cout<< "The average time to create "<<typeName<<" is: "<<time<<endl;
}
/*
*printMenu()
*prints's a message giving options
*/
void TextInterface::printMenu(){
	cout<<"Welcome to Call Timer 2.0 Main Menu"<<endl;
	cout<<"\nr: set number of trials to average over\np:to toggle calculating processes\nt: to toggle calculating threads\ns: to start the simulation\nq: quit"<<endl;
}
/*
*printRepeat()
*prints's a message about changing number of repeats
*/
void TextInterface::printRepeat()
{
	cout<<"How many trials do you wish to average over?"<<endl;
}
//getRespons()----Method to wait for user input
string TextInterface::getResponse()
{
	string response = "";
	cin >> response;
	return response;
}
//printStatus prints the current private variables of repeat, thread, and process
void TextInterface::printStatus(int repeat, bool process, bool thread){
	cout<<"Current trials is: "<<repeat<<"\t Compute Process Average? "<<process<<" \t Compute Thread Average? "<<thread<<endl;
}
//printInvalid()----print invalid command msg
void TextInterface::printInvalid()
{
	cout<<"Please input a valid command"<<endl;

}
//printNotNum()----print invalid command msg
void TextInterface::printNotNum()
{
	cout<<"Please input a number"<<endl;

}






