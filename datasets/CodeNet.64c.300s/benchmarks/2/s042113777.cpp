#include<iostream>
using namespace std;

int main()
{
  int i,a,b,c;
  while(1){
    cin >> a >> b >> c;
    if(a==-1 && b==-1 && c==-1) break;
    if(a==-1 || b==-1) cout << "F\n";
    else if(a+b>=80) cout << "A\n";
    else if(a+b>=65) cout << "B\n";
    else if(a+b>=50) cout << "C\n";
    else if(a+b>=30){
      if(c>=50) cout << "C\n";
      else cout << "D\n";
    }else cout << "F\n";
  }
  return 0;
}