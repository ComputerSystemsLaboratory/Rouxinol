#include <iostream>
using namespace std;

int main()
{
  int i=1, j=1, x[100000];
  x[0]=-1;


  while(x[i-1] != 0)
  {
    cin >> x[i];
    i=i+1;
  }

  while(x[j] != 0)
  {
    cout <<"Case " <<j <<": " <<x[j] <<endl;
    j=j+1;
  }

  return 0;
}