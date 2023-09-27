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
  int i,j,n;
  int num,d;
  while(1){
    pii p[200];
    cin>>n;
    if(n==0)break;   
    p[0].first=0;
    p[0].second=0;
    rep(i,n-1){
      cin>>num>>d;
      switch(d){
      case 0:p[i+1].first=p[num].first;
       	p[i+1].second=p[num].second-1;break;
 	
      case 1:p[i+1].first=p[num].first+1;
	p[i+1].second=p[num].second;break;
	
      case 2:p[i+1].first=p[num].first;
	p[i+1].second=p[num].second+1;break;
	
      case 3:p[i+1].first=p[num].first-1;
	p[i+1].second=p[num].second;break;
      }
      
      
    }
    
    int max1=-500,max2=-500;
    int min1=500,min2=500;
    rep(i,n){
      max1=max(max1,p[i].first);
      min1=min(min1,p[i].first);
      max2=max(max2,p[i].second);
      min2=min(min2,p[i].second);
    }
    cout<<max2-min2+1<<" "<<max1-min1+1<<endl;
  }
}