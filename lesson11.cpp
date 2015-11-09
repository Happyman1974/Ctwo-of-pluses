#include <iostream>

using std::cout;
using std::cin;

int main()
{
  int i(1); //itteration
  char quit;
  
  do
  {
    cout << "Continue(y/n) ? ";
  } while(cin >> quit && quit == 'y');
  //one more cicle
  for(int j=0; j <= 10; j += 2) //j = j + 2 -> j +=2
  {
    cout << j << endl;
  }
  retur 0;
}
