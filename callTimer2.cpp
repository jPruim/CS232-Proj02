/*
*callTimer2.h
*Made By Jason Pruim 
*Feb. 24, 2019
*For CS232 at Calvin College
*a project to practice interacting with shell
*and determining the relative times between threads and processes
*/
#include "LineController.h"
#include "TextController.h"
using namespace std;
// main function
// runs whole simulation
int main(int argc, char* argv[])
{	
 	//Set 	default values
	bool clInterface = false;
	string currentVar = "";
	//interpret values
    	for(int i = 0; i < argc;i++){
		currentVar = string(argv[i]);
		if(currentVar == "-cl") {
			clInterface = true;
		}
	}
	if(clInterface){
		LineController l = LineController(argc, argv);
		l.run();
	}
	else{
		cout<<"Starting Text Interface"<<endl;
		TextController t = TextController();
		t.run();
	}
	return 0;
};
