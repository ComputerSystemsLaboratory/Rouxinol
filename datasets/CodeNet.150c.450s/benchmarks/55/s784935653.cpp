#include<bits/stdc++.h>
using namespace std;
int main(){
  string n;
  queue<char> qi;
  while(cin >> n,n!="0"){
    int a=0;
    for(int j=0;j<n.size();j++)
      qi.push(n[j]);
    for(int i=0;i<n.size();i++){
      int b=0;
      b=qi.front();
      qi.pop();
      a+=(b-'0');
    }
    cout<<a<<endl;
  }
  return 0;
}