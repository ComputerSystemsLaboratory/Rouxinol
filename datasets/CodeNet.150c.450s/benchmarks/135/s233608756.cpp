#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=(b);i>=(a);i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second
#define IINF INT_MAX
#define LINF LLONG_MAX


int wid[2];

lli dats[2][1505]={};
vector<lli> sums[2];

int main(void){
  for(;;){
    
    scanf("%d%d",wid,wid+1);
    if(wid[0]==0)break;

    rep(i,2){
      sums[i].clear();
      reg(j,1,wid[i]){
	scanf("%lld",&dats[i][j]);
	dats[i][j]+=dats[i][j-1];
      }
      rep(j,wid[i]){
	reg(k,j+1,wid[i]){
	  sums[i].push_back(dats[i][k]-dats[i][j]);
	}
      }
      sort(sums[i].begin(),sums[i].end());
      /*
      rep(j,sums[i].size()){
	printf("sums %d .. %lld\n",i,sums[i][j]);
	}*/
    }

    
    int p1=0,p2=0;
    lli ans = 0;
    
    while(p1<sums[0].size()){
      int ns = sums[0][p1];
      lli s1=0,s2=0;
      while(p1<sums[0].size()){
	if(ns==sums[0][p1]){
	  s1++;
	  p1++;
	}
	else break;
      }
      while(p2<sums[1].size() && ns>=sums[1][p2]){
	if(ns==sums[1][p2])s2++;
	p2++;
      }

      ans += s1*s2;
    }

    printf("%lld\n",ans);
  }
    


  
  return 0;
}