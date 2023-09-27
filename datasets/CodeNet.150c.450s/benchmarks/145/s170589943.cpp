#include <bits/stdc++.h>
using namespace std;
int main(){
  map<string,int>a;
  string s,p,q;
  int k=0;
  while(cin>>s){
    a[s]++;
    if(p.size()<s.size())p=s;
    if(k<a[s]){
      k=a[s];
      q=s;
    }
  }
  cout<<q<<' '<<p<<endl;
}