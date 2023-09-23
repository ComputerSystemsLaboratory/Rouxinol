//#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<string>
#include<cmath>
#include<cassert>
#include<map>
  using namespace std;

typedef long long ll;
typedef ll int__;
#define rep(i,j) for(int__ (i)=0;(i)<(j);(i)++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);(i)++)
#define all(v) begin(v),end(v)


int main()
{
  while(true){
    int e;cin>>e;
    if(e==0)break;

    int m = 1<<30;
    for(int z=100;z>=0;z--){
      if(z*z*z>e)continue;
      for(int y=1000;y>=0;y--){
        if(z*z*z+y*y>e)continue;
        m=min(z+y+e-y*y-z*z*z,m);
      }
    }
    cout<<m<<endl;
  }
  return 0;
}