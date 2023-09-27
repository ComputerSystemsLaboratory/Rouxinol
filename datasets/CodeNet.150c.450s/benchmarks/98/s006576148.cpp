#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int n,m,s;
  int i,j;
  while(1){
    cin>>n>>m;
    if(n==0 && m==0)break;
    int card[105][2]={};
    rep(i,n){
      cin>>s;
      card[s][0]++;
      card[0][0]+=s;
    }
    rep(i,m){
      cin>>s;
      card[s][1]++;
      card[0][1]+=s;
    }
    int diff=card[0][0]-card[0][1];
    bool ans=true;
    if(diff==0){
      for(i=1;i<=100;i++)
	if(card[i][0] && card[i][1]){
	  cout<<i<<" "<<i<<endl;
	  ans=false;
	  break;
	}
    }else if(abs(diff)%2){
      ;
    }else if(diff>0){
      diff/=2;
      for(i=1;i+diff<=100;i++)
	if(card[i+diff][0] && card[i][1]){
	  cout<<i+diff<<" "<<i<<endl;
	  ans=false;
	  break;
	}
    }else{
      diff=abs(diff);
      diff/=2;
      for(i=1;i+diff<=100;i++)
	if(card[i][0] && card[i+diff][1]){
	  cout<<i<<" "<<i+diff<<endl;
	  ans=false;
	  break;
	}
    }
    if(ans)
      cout<<"-1"<<endl;
  }

}