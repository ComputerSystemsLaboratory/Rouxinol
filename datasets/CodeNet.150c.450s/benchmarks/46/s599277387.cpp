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
  int a,b;
  while(cin>>a>>b,a||b){
    int co=0;
    loop(i,1,a+1)
      loop(j,1,a+1)
      loop(k,1,a+1)if(i!=j&&j!=k&&k!=i&&i+j+k==b)co++;//cout<<i<<" "<<j<<" "<<k<<endl;
    cout<<co/6<<endl;
  }
}