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
  int ma=1e7;
  vector<bool>sosu(ma,1);
  sosu[0]=sosu[1]=0;
  for(int i=4;i<ma;i+=2)sosu[i]=0;
  for(int i=3;i<ma;i+=2)
    for(int j=i*3;j<ma;j+=i*2)sosu[j]=0;
  int in;
  while(cin>>in){
    int co=0;
    loop(i,2,in+1)if(sosu[i])co++;
    cout<<co<<endl;
  }
}