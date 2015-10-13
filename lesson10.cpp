/*
*
*Author: Sergei Shurubov
*Name: Switch operator
*
*/
#include <iostream>
using namespace std;


int main()
{
int dollar;

cout << "I need you input a number of dollars" << endl;
cin >> dollar;

cout << "You have " << dollar << " ";
if (dollar < 0)
{
	cout << "It doesn't work!";
	return -1;
}
if ((dollar%100) >= 11 && (dollar%100) <= 19)
	cout << "долларов!" << endl;
	else
		switch(dollar%10)
		{
			case 1: cout << "доллар!\n";break;
			case 2:
			case 3:
			case 4: cout << "доллара!\n";break;
			
			default: cout << "долларов!\n";
		}
}
