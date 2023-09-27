#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<stdio.h>
#include <string>
#include <complex>
#include <functional>
using namespace std;
typedef pair<int,int> P;
double dat[100][100];
int dp[6][1010];//動的計画法
int prime[10000001];
char str[1010][1010];
vector<pair<int,int> > pc[100001];
int ABS(int a){return max(a,-a);}
int main(){
  int a,b,n;
  int ai,bi;
  while(cin>>n,n){
	  a=b=0;
	  for(int i=0;i<n;i++)
	  {
		  cin>>ai>>bi;
		  if(ai>bi) a+=ai+bi;
		  else if(bi>ai) b+=ai+bi;
		  else{
			  a+=ai;
			  b+=bi;
		  }
	  }
	 cout<<a<<' '<<b<<endl;
  }
    return 0;
}
