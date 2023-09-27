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
#define max 2000000
bool sosu[max]={1,1,0};
int main(){
  for(int i=4;i<max;i+=2)sosu[i]=1;
  for(int i=3;i<max;i+=2)
    if(!sosu[i])
      for(int j=i*3;j<max;j+=i*2)
	sosu[j]=1;

  int a,b,c;
  while(cin>>a>>b>>c,a+b+c){
    int co=0;
    while(1){
      if(!sosu[a])co++;
      if(co==c)break;
      a+=b;
    }
    cout<<a<<endl;
  }
}