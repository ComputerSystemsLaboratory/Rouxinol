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
vector<int> v1(4);
vector<int> v2(4);
int main()
{
  while(scanf("%d %d %d %d",&v1[0],&v1[1],&v1[2],&v1[3])!=EOF){
    scanf("%d %d %d %d",&v2[0],&v2[1],&v2[2],&v2[3]);
    int i,j,hit=0,blow=0;
    rep(i,4){
      if(v1[i]==v2[i])
	hit++;
      else
	rep(j,4){
	  if(i==j)continue;
	  if(v1[i]==v2[j])blow++;
	}
    }
    cout<<hit<<" "<<blow<<endl;
  }
}