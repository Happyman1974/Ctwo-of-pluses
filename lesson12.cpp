#include <iostream>

using std::cout;
using std::cin;

int main()

unsigned int a, b;

cout << "Enter a, b: ";

if(!(cin >> a >> b))
  {
  cout << "Something wrong with input!";
  return -1;
  }
