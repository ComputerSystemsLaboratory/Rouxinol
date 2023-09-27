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
typedef long long int LLI;
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=100000;
  rep(i,n){
    ans*=1.05;
    if(ans%1000){
      ans-=ans%1000;
      ans+=1000;
    }
  }
  cout<<ans<<endl;
}