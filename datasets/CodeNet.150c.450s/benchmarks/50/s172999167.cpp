#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb(in,tmp) in.push_back(tmp)
#define all(in) in.begin(),n.end()
#define PI acos(-1)
using namespace std;
int main(){
  int m;
  while(cin>>m,m){
  int co=0;
  int o=1000-m;
  if(o>500){co++;o-=500;}
  while(o>=100){co++;o-=100;}
  while(o>=50){co++;o-=50;}
  while(o>=10){co++;o-=10;}
  while(o>=5){co++;o-=5;}
  while(o>=1){co++;o--;}

  cout<<co<<endl;
  }
}