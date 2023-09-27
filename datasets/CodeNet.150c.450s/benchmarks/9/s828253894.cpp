#include<iostream>
#include<string>
using namespace std;

int main()
{
  int m,n,i;
  string a,b,c;
  while(1){
    cin >> a;
    if(a=="-") break;
    cin >> m;
    for(i=1;i<=m;i++){
      cin >> n;
      b=a.substr(0,n);
      c=a.erase(0,n);
      a=c+b;
    }
    cout << a << endl;
  }
}