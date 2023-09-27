#include <iostream>
using namespace std;

int i = 1, x, _n;
bool finish = false;

void checkNum();
void include3();
void endCheckNum();

void checkNum()
{
  x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    endCheckNum();
  }
  
}

void include3()
{
  if(finish) return;
  if ( x % 10 == 3 ){
    cout << " " << i;
    endCheckNum();
  }
  x /= 10;
  if ( x ) include3();
}

void endCheckNum()
{
  if ( ++i <= _n ) checkNum();
  else finish = true;
}

void call(int n)
{
  _n = n;
  while(!finish) {
    checkNum();
    include3();
    endCheckNum();
  }
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  call(n);
  return 0;
}