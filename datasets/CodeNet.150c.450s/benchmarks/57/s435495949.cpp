#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  char op;
  while(cin>>a>>op>>b&&op!='?'){
    if(op=='+') cout<<a+b<<endl;
    else if(op=='-') cout<<a-b<<endl;
    else if(op=='*') cout<<a*b<<endl;
    else cout<<a/b<<endl;
  }
  return 0;
}

