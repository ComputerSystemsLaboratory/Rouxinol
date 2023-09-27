#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
int n,s,ans;
void rec(int a,int b,int sum){
  if(sum==s&&b==0){
    ans++;
    return;
  }
  if(a>=10||b<=0)return;
  rec(a+1,b,sum);
  rec(a+1,b-1,sum+a);
}
int main(){
  while(cin>>n>>s){
    if(n==0&&s==0)break;
    ans=0;
    rec(0,n,0);
    cout<<ans<<endl;
  }
}