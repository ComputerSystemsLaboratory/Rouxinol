#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

int con(string s){
  int a=0;
  for(int i=0;i<s.size();i++){
    int x=1;
    if(s[i]>='2'&&s[i]<='9'){
      x=s[i]-'0';
      i++;
    }
    if(s[i]=='m')a+=1000*x;
    if(s[i]=='c')a+=100*x;
    if(s[i]=='x')a+=10*x;
    if(s[i]=='i')a+=1*x;
  }
  return a;
}

signed main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s1,s2;
    cin>>s1>>s2;
    int ans=con(s1)+con(s2);
    string s=to_string(ans);
    int x;
    for(int i=0;i<s.size();i++){
      if(s[i]>='2'&&s[i]<='9'){
        cout<<s[i];
      }
      if(s[i]!='0'){
        if(s.size()-i==4)cout<<"m";
        if(s.size()-i==3)cout<<"c";
        if(s.size()-i==2)cout<<"x";
        if(s.size()-i==1)cout<<"i";
      }
    }
    cout<<endl;
  }
}

