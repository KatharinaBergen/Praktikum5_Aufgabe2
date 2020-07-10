/*
Author: Kat Bergen

a) create a c-string and a pointer pointing to the object. Write a function to turn all chars to lower. 
b) copy a c-string and create a new pointer to it

PAD1 P5A2
*/

#include <exception>
#include <iostream>
#include "Functions.h"


int main() try
{

	check();

	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what();
	return -1;
}
catch (...)
{
	std::cerr << "unknown error";
	return -2;
}