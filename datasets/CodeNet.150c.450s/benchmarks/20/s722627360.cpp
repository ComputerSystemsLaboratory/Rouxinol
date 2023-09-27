#include <iostream>
using namespace std;

int main(){
  int a,h,m,s;
  cin >> a;
  h=a/3600;
  m=(a-h*3600)/60;
  s=(a-h*3600)%60;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}