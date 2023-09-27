#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int n;
  ll c[101][21]={};
  int a;
  int i,j;

  cin>>n;
  cin>>a;
  c[1][a]++;

  for(i=2;i<n;i++){
    cin>>a;
    for(j=0;j<21;j++)
      if(c[i-1][j]){
	if(j+a<21)
	  c[i][j+a]+=c[i-1][j];
	if(j-a>=0)
	  c[i][j-a]+=c[i-1][j];
      }
  }
  cin>>a;
  /*
  for(i=1;i<11;i++){
    for(j=0;j<21;j++)
      printf(" %2d",c[i][j]);
    cout<<endl;
  }
  */

  cout<<c[n-1][a]<<endl;

}