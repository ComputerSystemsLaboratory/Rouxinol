#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
string f(string s){
  int i;
  int ln=s.length();
  string t;
  t=s;
  for(i=0;i<ln;i++)
    t[i]=s[ln-i-1];
  return t;
}
int main(){
  int i,j;
  int n;
  int ln;
  int *a;
  string s;
  list<string> l;
  cin>>n;
  a=new int[n];
  for(i=0;i<n;i++){
    cin>>s;
    ln=s.length();
    l.clear();
    for(j=1;j<ln;j++){
      l.push_back(s.substr(0,j)+s.substr(j));
      l.push_back(f(s.substr(0,j))+s.substr(j));
      l.push_back(s.substr(0,j)+f(s.substr(j)));
      l.push_back(f(s.substr(0,j))+f(s.substr(j)));
      l.push_back(s.substr(j)+s.substr(0,j));
      l.push_back(f(s.substr(j))+s.substr(0,j));
      l.push_back(s.substr(j)+f(s.substr(0,j)));
      l.push_back(f(s.substr(j))+f(s.substr(0,j)));
    }
    l.sort();
    l.unique();
    a[i]=l.size();
  }
  for(i=0;i<n;i++)
    cout<<a[i]<<endl;
  delete[]a;
  return 0;
}