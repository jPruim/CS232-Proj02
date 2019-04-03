/*
*Controller.h
*Made By Jason Pruim 
*Feb 24, 2019
*For CS232 at Calvin College
*a class to run the model class
*and print out results
*/
#ifndef FILE_Controller
#define FILE_Controller
#include "Model.h"
#include <iostream>

using namespace std;
/*class declaration for Controller*/
class Controller{
	public:
		void run(bool thread, bool process,int repeat);

};

#endif /* !FILE_Model */
