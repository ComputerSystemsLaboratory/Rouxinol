#include<iostream>
using namespace std;

int main()
{
  int num,tmp;
  int a,b,c;
  cin >> num; 
  while(num-->0){
    cin >> a >> b >> c;
    if(b>a){
      tmp=a;
      a=b;
      b=tmp;
    }
    if(c>a){
      tmp=a;
      a=c;
      c=tmp;
    }
    if(a*a==b*b+c*c)
      cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}