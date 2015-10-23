// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
using namespace std;




int main()
{

	//for (int kit = 0; kit < 1023; kit++)
	//{
	//	SetConsoleTextAttribute(hconsole, kit);
	//	cout << kit << " Be a man" << '\n';
	//}


	// Function Declarations 
	int priority(string, int);


	// Test Text
	string test = "Genetic Lifeform\n";


	priority(test, 1);
	priority(test, 2);
	priority("Kitty", 3);



	cin.get();
	return 0;

}



















// For declaring the Color of TEXT !

int priority(string s, int p)
{
	HANDLE hconsole;
	hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

	switch (p)
	{
	case 1:
		SetConsoleTextAttribute(hconsole, 778);
		cout << s;
		SetConsoleTextAttribute(hconsole, 783);
		break;

	case 2:
		SetConsoleTextAttribute(hconsole, 782);
		cout << s;
		SetConsoleTextAttribute(hconsole, 783);

		break;

	case 3:
		SetConsoleTextAttribute(hconsole, 780);
		cout << s;
		SetConsoleTextAttribute(hconsole, 783);

		break;


	}
	int error = 0;
	return error;
}