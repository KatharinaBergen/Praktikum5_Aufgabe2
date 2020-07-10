/*
Author: Kat Bergen

cpp to define functions

PAD1 P5A2
*/

#include "Functions.h"
#include <iostream>



int countElements(const char* cs)
{
	int counter{};
	char ch{' '}; //dummy initialization with ' ', because standard is '\0' and while (below) would never be used if we used standard

	while (ch != '\0')
	{
		ch = cs[counter];
		counter++;
	}

	return counter;
}

void print(const char* cs)
{
	int counter{countElements(cs) - 1}; //counter excluding '\0'

	for (int i{}; i < counter; i++)
	{
		std::cout << cs[i];
	}
	std::cout << std::endl;
}


char* cstring_copier(const char* cs)
{
	int counter{ countElements(cs) };
	char* newPointer{ new char[counter] {} }; //create new pointer with space for same amount of values and same values as in previous pointer
	char ch{};
	

	for (int i{}; i < counter; i++)
	{
		newPointer[i] = cs[i];
	}

	return newPointer;
}

void tolower(char* cs)
{
	int counter{ countElements(cs) };

	for (int i{}; i < counter; i++)
	{
		//cs[i] = tolower(cs[i]); //built-in function, same name, different return. returns lowercase char

		if (cs[i] >= 65 && cs[i] <= 90) //convertion upper to lower using ascii code
		{
			cs[i] = cs[i] + 32;
		}
	}		
}

void check()
{
	char c1[]{ "Hallo C++" };
	char* cs1{ c1 };
	char* cs1Copy{ cstring_copier(cs1) };
	tolower(cs1);
	print(cs1);
	print(cs1Copy);

	char c2[]{ "Hallo Professor" };
	char* cs2{ c2 };
	char* cs2Copy{ cstring_copier(cs2) };
	tolower(cs2);
	print(cs2);
	print(cs2Copy);

	char c3[]{ "Und wenn Sie nicht gestorben sind, dann leben Sie noch heute." };
	char* cs3{ c3 };
	char* cs3Copy{ cstring_copier(cs3) };
	tolower(cs3);
	print(cs3);
	print(cs3Copy);

	char c4[]{ "Jo napot kivanok!" };
	char* cs4{ c4 };
	char* cs4Copy{ cstring_copier(cs4) };
	tolower(cs4);
	print(cs4);
	print(cs4Copy);

	char c5[]{ "All roads lead nowhere, and nowhere is where love is found ^_^." };
	char* cs5{ c5 };
	char* cs5Copy{ cstring_copier(cs5) };
	tolower(cs5);
	print(cs5);
	print(cs5Copy);

	char c6[]{ "I AM BIG" };
	char* cs6{ c6 };
	char* cs6Copy{ cstring_copier(cs6) };
	tolower(cs6);
	print(cs6);
	print(cs6Copy);
}