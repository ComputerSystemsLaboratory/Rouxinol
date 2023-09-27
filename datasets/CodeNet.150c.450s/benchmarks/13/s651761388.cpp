#include<bits/stdc++.h>
#include<sstream>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  string s,p;
  cin>>s>>p;
  stringstream ss;
  ss<<s<<s;
  if(strstr(ss.str().c_str(),p.c_str()))
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
}