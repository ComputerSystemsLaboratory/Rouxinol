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
  int n,m;
  char change[127],befo,aft,tmp;
  while(cin>>n,n){
	  for(int i=0;i<127;i++) change[i]=0;
	  for(int i=0;i<n;i++){
		  cin>>befo>>aft;
		  change[befo]=aft;
	  }
	  cin>>m;
	  for(int i=0;i<m;i++){
		  cin>>tmp;
		  if(change[tmp]==0) cout<<tmp;
		  else{
			  cout<<change[tmp];
		  }
	  }
	  cout<<endl;
  }
    return 0;
}
