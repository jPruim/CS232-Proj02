/*
*TextController.h
*Made By Jason Pruim 
*Feb 24, 2019
*For CS232 at Calvin College
*a class to run provide user input through terminal
*/
#include "TextInterface.h"
#include "Model.h"
using namespace std;


/*declaration of TextInterface class*/

class TextController{
	private:
	TextInterface t;
	int repeat;
	bool quit;
	bool thread;
	bool process;
	
	
	void mainMenu();
	public:
	void simulate();
	void run();
	TextController();
};




	


