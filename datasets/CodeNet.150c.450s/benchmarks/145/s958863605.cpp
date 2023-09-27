#include <iostream>
#include <string>
#include <map>
using namespace std;
int M,l;int main(){string s,t,u;map<string,int>m;for(;cin>>u;t=t.size()<u.size()?u:t)if(++m[u]>M)M=m[u],s=u;cout<<s<<' '<<t<<endl;}