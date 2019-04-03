/*
*TextController.cpp
*Made By Jason Pruim 
*Feb 24, 2019
*For CS232 at Calvin College
*a class to run provide user input through terminal
*/
#include "TextController.h"
using namespace std;

//constructor
TextController::TextController(){
	t = TextInterface();
	int repeat = 5;
	quit = false;
	thread = false;;
	process = false;
}
/*
*simulate()
*runs the model using the private variables of class instance
*/
void TextController::simulate(){
	if(!thread && !process){      
		t.printNoRun();
		return;
	}
	Model m;
	double timing = 0;	
	if(thread){
		timing = m.threadTiming(repeat);
		t.printTiming("threads",timing);
	}
	if(process){
		timing = m.processTiming(repeat);
		t.printTiming("processes",timing);
	}
}
/*run()
*loops through message passing and interprets for response
*/
void TextController::run(){
	while(1){
		if(quit){return;}
		t.printMenu();
		string response = t.getResponse();
		if(response == "r"){
			t.printRepeat();
			response = t.getResponse();
			try{repeat = stoi(response);}
			catch(...){t.printNotNum();};
		}
		else if(response =="p"){process = !process;}
		else if(response =="t"){thread = !thread;}
		else if(response =="q"){quit = true;}
		else if(response =="s"){
			simulate();
		}
		else{t.printInvalid();}
	}
}



