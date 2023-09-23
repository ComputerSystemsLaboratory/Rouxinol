#include <iostream>
#include <cstdio>
using namespace std;

int gcb(int x, int y)
{
  if(y == 0)return x;
  return gcb(y, x % y);
}

int main()
{
  int a, b;
  while(cin >> a >> b){
    cout << gcb(a, b) << " " << a / gcb(a, b) * b<< endl;    
  }
}