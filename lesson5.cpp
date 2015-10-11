//lesson5 read from / write in file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fi("file.txt");
	while (true)
	{
		string v;
		fi >> v;
		if (!fi.eof())
			cout << v << endl;
		else
			break;
	}

	ofstream fo("ofile.txt");
        for (int i = 0; i < 3; ++i)
        {
                string v;
		cout << "Ввведите текст " << i+1 << " из 3х " << endl;
		cin >> v;
                fo << v << endl;
        }


}
