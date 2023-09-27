#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,i,s;
  while(cin>>a){
    for(s=0,i=1;a*i<600;i++)s+=i*i*a*a*a;
    cout<<s<<endl;
  }
}