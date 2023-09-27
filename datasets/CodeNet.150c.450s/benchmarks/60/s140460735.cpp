#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;



int main(){
  int n;
  cin>>n;
  int a[105][105]={};
  int s,t,u;
  //int maxs=INT_MIN,maxu=INT_MIN;
  rep(i,n){
    cin>>s>>t;
    rep(j,t){
      cin>>u;
      a[s][u]=1;
      //u=max(maxu,u);
    }
    //s=max(maxs,s);
  }
  //int maxn=max(maxs,maxu);
  
  rep(i,n){
    rep(j,n){
      cout<<a[i+1][j+1];
      if(j!=n-1)cout<<" ";
    }cout<<endl;
  }
  

  return 0;
}

