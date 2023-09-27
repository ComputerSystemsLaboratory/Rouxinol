#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<stdlib.h>
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
  int e;

  while(1){
    cin>>e;
    if(e==0)break;
    int ans=INF;
    int x,y,z;
    for(z=0;z*z*z<=e;z++)
      for(y=0;z*z*z+y*y<=e;y++){
        x=e-z*z*z-y*y;
	ans=min(ans,x+y+z);
      }
    cout<<ans<<endl;
  }

}