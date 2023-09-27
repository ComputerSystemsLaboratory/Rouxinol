#include <iostream>

using namespace std;

int main(void){
  int s;
  int h,m,sec;

  cin >> s;
  sec=s%60;  s=s/60;
  m=s%60;  s=s/60;
  h=s%60;
  cout << h << ':' << m << ':' << sec << endl;
}