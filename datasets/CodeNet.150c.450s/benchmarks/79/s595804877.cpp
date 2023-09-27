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
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    string in;
    rep(i,n)in=(char)(i+49)+in;

    rep(i,m){
      int a,b;
      cin>>a>>b;
      //cout<<in<<endl;
      in=in.substr(a-1,b)+in.substr(0,a-1)+in.substr(a+b-1);
    }
    cout<<in[0]-'0'<<endl;
  }

}