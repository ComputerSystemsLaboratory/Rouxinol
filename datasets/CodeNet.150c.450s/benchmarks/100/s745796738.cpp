#include <iostream>
using namespace std;

long int fact(int n){
  if(n==2) return 2;
  else return (long int)n*fact(n-1);
}

int main()
{
  int n;
  long int f;
  cin >> n;
  f=fact(n);
  cout << f << endl;
  return 0;
}