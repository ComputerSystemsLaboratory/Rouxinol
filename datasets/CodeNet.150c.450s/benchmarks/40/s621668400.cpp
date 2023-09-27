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
  vector<int>in(6);
  rep(i,6)cin>>in[i];
  string s;
  cin>>s;
  rep(i,s.size()){
    if(s[i]=='S'){
      int tmp=in[1];
      in[1]=in[0];
      in[0]=in[4];
      in[4]=in[5];
      in[5]=tmp;
    }else if(s[i]=='E'){
      int tmp=in[2];
      in[2]=in[0];
      in[0]=in[3];
      in[3]=in[5];
      in[5]=tmp;
    }else if(s[i]=='W'){
      int tmp=in[3];
      in[3]=in[0];
      in[0]=in[2];
      in[2]=in[5];
      in[5]=tmp;
    }else{
      int tmp=in[0];
      in[0]=in[1];
      in[1]=in[5];
      in[5]=in[4];
      in[4]=tmp;
    }
  }
  cout<<in[0]<<endl;
}