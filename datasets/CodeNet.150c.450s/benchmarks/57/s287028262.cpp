#include<iostream>
//#include<string>

using namespace std;

int main(){
  int a[10000];
  int b[10000];
  char op[10000];

  int i;
  for(i=0;i<10000;i++){
    cin >> a[i] >> op[i] >> b[i];
    if(op[i]=='?')
      break;
  }

  for(i=0;i<10000;i++){
    if(op[i]=='+')
      cout << a[i]+b[i] << endl;
    else if(op[i]=='-')
      cout << a[i]-b[i] << endl;
    else if(op[i]=='*')
      cout << a[i]*b[i] << endl;
    else if(op[i]=='/')
      cout << a[i]/b[i] << endl;
    else
      break;
  }
}