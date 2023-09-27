#include<bits/stdc++.h>
using namespace std;
int main(){
  string str,q,p;
  int n,a,b;
  cin>>str>>n;
  for(int i=0;i<n;i++){
    cin>>q>>a>>b;
    if(q=="replace"){
      cin>>p;
      str.replace(a,b-a+1,p);
    }
    if(q=="reverse") reverse(str.begin() + a,str.begin() + b+1);
    if(q=="print") cout<<str.substr(a,b-a+1)<<endl;
  }
  return 0;
}