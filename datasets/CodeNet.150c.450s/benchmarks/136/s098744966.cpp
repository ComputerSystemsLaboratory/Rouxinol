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
LLI gcd(LLI n,LLI m){
  while(m){
    n=n%m;
    swap(n,m);
  }
  return n;
}
int main(){
  LLI n,m;
  while(cin>>n>>m){
    LLI ans=gcd(n,m);
    cout<<ans<<" "<<ans*(n/ans)*(m/ans)<<endl;
  }
}