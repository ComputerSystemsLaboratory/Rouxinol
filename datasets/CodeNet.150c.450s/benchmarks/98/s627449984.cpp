#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,m;
  while(1){
    cin>>n>>m;
    if(n==0&&m==0)break;
    int a[105],b[105];
    long long sum_a=0,sum_b=0;
    rep(i,0,n){
      cin>>a[i];
      sum_a+=a[i];
    }
    rep(i,0,m){
     cin>>b[i];
     sum_b+=b[i];
    }
    bool ok=true;

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(sum_a-a[i]+b[j]==sum_b-b[j]+a[i]&&ok){
	  cout<<a[i]<<" "<<b[j]<<endl;
	  ok=false;
	}
      }
    }
    if(ok)cout<<-1<<endl;
  }
  
  return 0;
}