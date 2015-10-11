//lesson7 phonebook
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Number
{
public:
	string name;
	string number;
	Number(const Number &v):
		name(v.name),
		number(v.number) {}
	Number() {}
	Number &operator=(const Number &v)
	{
	name  = v.name;
	number = v.number;
	return v;
	}

};

int main()
{
	fstream f("file.txt");
	vector<Number> telBook;
	while(true)
	{
		Number t;
		f >> t.name;
		if (f.eof())
			break;
		f >> t.number;
		if (f.eof())
			break;
		telBook.push_back(t);
	}
	while(true)
	{
		cout << "Input name or stop";
		string name;
		cin >> name;
		for (int i = 0;)
	}
}
