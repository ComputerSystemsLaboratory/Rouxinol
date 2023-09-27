#include<iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  while(a!=-1 || b!=-1 || c!=-1){
    if(a==-1 || b==-1)cout << 'F';
    else if(a+b>=80)cout << 'A';
    else if(a+b>=65)cout << 'B';
    else if(a+b>=50)cout << 'C';
    else if(a+b>=30){
      if(c>=50)cout << 'C';
      else cout << 'D';
    }else cout << 'F';
    cout << endl;
    cin>> a >> b >> c;
  }
  return 0;
}

