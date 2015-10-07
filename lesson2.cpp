//lesson 2 array
#include <iostream>
using namespace std;

int main()
{
int a[20];
for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	a[i] = i * i;

for (int i = 0; i < sizeof(a)/ sizeof(a[0]); ++i)
	cout << a[i] << endl;

}
