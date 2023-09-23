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
#define MAX 1000100
using namespace std;
bool sosu[MAX]={1,1,0};
int main(){
  for(int i=4;i<MAX;i+=2)sosu[i]=1;
  for(int i=3;i<MAX;i+=2){
    if(sosu[i])continue;
    for(int j=i*3;j<MAX;j+=i*2)sosu[j]=1;
  }
  int a,b,c;
  while(cin>>a>>b>>c,a||b||c){
    int co=0;
    if(!sosu[a])co++;
    while(co!=c){
      a+=b;
      if(!sosu[a])co++;
      if(co==c)break;
    }
    cout<<a<<endl;
  }
}