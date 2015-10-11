/*
*
*Author: Sergei Shurubov
*Name: Math operation's results
*
*/
#include <iostream>
#include <climits>

using namespace std;

int main()
{
int a,b; //4 bytes
double c=10.0,d=3; //8 bytes
int i = 33;
a = 35;
b = 6;

//a%b = a - b*(a/b)
cout << "a = 35, b = 6" << endl;
cout << "a / b = " << (a/b) << endl;
cout << "a % b = " << (a%b) << endl;
cout << "a % b = " << a-b*(a/b) << endl;
cout << "вывод последней цифры числа a % 10 = " << (a%10) << endl;
cout << "a - b = " << a-b << endl;
cout << "c = 10, d = 3" << endl;
//increase sigh number
cout.precision(20);
cout << "double c / d = " << c/d << endl;
cout << "ASCI simbols " << endl; 
while (i < 55) {
	cout << "i = " << i << " ASCI = " << char(i) << endl;
	i++;
	}
}

