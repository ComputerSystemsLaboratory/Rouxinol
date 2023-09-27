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
#define MAX 1000000
bool sosu[MAX]={false};
int main(){
  for(int i=3;i<MAX;i+=2){
    if(sosu[i])continue;
    for(int j=i*3;j<MAX;j+=i*2)
      sosu[j]=true;
  }
  for(int i=4;i<MAX;i+=2)
    sosu[i]=true;
  int in;
  while(cin>>in){
    int co=0;
    loop(i,2,in+1)if(!sosu[i])co++;
    cout<<co<<endl;
  }


}