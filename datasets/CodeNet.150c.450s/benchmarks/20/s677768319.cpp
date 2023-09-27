#include<iostream>
using std::cout; using std::endl;
using std::cin;
int main(){
  int s,h,m;
  cin >> s;
  h = s/ 3600; 
  s = s - h * 3600;
  m = s / 60;
  s = s - m * 60;
  cout << h << ":" << m << ":" << s<< endl;
}