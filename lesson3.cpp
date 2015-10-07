// 2x array
#include <iostream>
using namespace std;

int main()
{
	const int H = 10;
	const int W = 32;
	char m[10][32];
	for (int y = 0; y < H; ++y)
	  for (int x = 0; x < W; ++x)
		m[y][x] = '.';
		m[5][16] = 'S';
        for (int y = 0; y < H; ++y)
	{
          for (int x = 0; x < W; ++x)
		cout << m[y][x];
		cout << endl;
	}

}
