#include<iostream>
#include<string>
#include<map>
using namespace std;int main(){map<string,int>m;string s,t,u;for(;cin>>s;s.length()>u.length()?u=s:u)++m[s]>m[t]?t=s:s;cout<<t<<" "<<u<<endl;}