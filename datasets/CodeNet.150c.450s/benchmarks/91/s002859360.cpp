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
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int n,i,j;
  while(scanf("%d",&n)!=EOF){
    vector<int> v(1000000,0);
    for(i=2;i<n+1;i++){
      if(v[i])continue;
      for(j=2;i*j<n+1;j++)
	v[i*j]=1;
    }
    int sum=0;
    for(i=2;i<n+1;i++)
      if(v[i]==0)sum++;
    cout<<sum<<endl;
  }
}