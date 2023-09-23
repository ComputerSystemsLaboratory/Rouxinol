#include <iostream>
using namespace std;

int main(){
  int time, h, m, s;
  cin >> time;

  h = time/3600;
  m = (time%3600)/60;
  s = (time%3600)%60;

  cout << h << ":" << m << ":" << s << "\n";
}