#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string,int> a;
  string s,maxs,maxms;
  while(cin>>s){
    a[s]++;
    if(a[maxs]<a[s])maxs=s;
    if(maxms.size()<s.size()) maxms=s;
  }
  cout<<maxs<<' '<<maxms<<endl;
}