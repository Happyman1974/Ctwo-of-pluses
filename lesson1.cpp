#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	int age;
	string name;
	int weight;

	void print()
	{
	cout << "age: " << age << endl;
	cout << "name: " << name << endl;
	cout << "weight: " << weight << endl;

	}
};

int main()
{
	Human me;
	Human you;
	me.age = 41;
	me.name = "Sergey";
	me.weight = 86;
	you.age = 16;
	you.name = "Elena";
	you.weight = 47;

	me.print();
	cout << endl;
	you.print();
}
