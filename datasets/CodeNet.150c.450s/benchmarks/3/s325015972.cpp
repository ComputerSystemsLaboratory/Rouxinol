#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
string reverse(string tmp){
  string out="";
  for(int i=tmp.size()-1;i>=0;i--)out=out+tmp[i];
  return out;
}
int main(){
  string s;cin>>s;
  int n;cin>>n;
  rep(i,n){
    string tmp;
    cin>>tmp;
    if(tmp=="replace"){
      int a,b;
      cin>>a>>b>>tmp;
      s.replace(a,b-a+1,tmp);
    }else if(tmp=="reverse"){
      int a,b;
      cin>>a>>b;
      string tmp=s.substr(a,b-a+1);
      s=s.substr(0,a)+reverse(tmp)+s.substr(b+1);
    }else{
      int a,b;
      cin>>a>>b;
      cout<<s.substr(a,b-a+1)<<endl;
    }
    //cout<<" "<<s<<endl;
  }
}