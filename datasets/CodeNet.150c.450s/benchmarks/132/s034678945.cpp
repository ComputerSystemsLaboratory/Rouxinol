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
  int n,p,j;

  while(1){
    cin>>n>>p;
    if(n==0 && p==0)break;
    int i=0;
    int sum=p;
    int hand[50]={};
    while(1){
      //cout<<p<<endl;
      if(p>0){
	p--;
	hand[i%n]++;
	if(p==0 && sum==hand[i%n]){
	    cout<<i%n<<endl;
	    break;
	}
      }else{
	p+=hand[i%n];
	hand[i%n]=0;
      }
      i++;
    }
  }
}