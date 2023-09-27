#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a;
  int h = a/60/60;
  int m = (a-h*60*60)/60;
  int s = a%60;
  cout << h << ":"<<m<<":"<<s<<endl;
  return 0;
}
