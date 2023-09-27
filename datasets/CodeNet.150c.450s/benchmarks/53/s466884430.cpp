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
#define CIN(in) int in;cin>>in;
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  CIN(in);
  cout<<in<<":";
  loop(i,2,1e9+10){
    if(i*i>in){cout<<" "<<in;break;}
    while(in%i==0){
      cout<<" "<<i;
      in/=i;
    }
    if(in==1)break;
  }
  cout<<endl;
}
  