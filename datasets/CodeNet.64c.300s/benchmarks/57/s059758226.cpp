#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl;
#define WHITE 0
#define BLACK 2
#define GRAY 1
#define RE return 0;

int R,C;
int main(){
  while(cin>>R>>C&&R&&C){
    int senbei[R][C];
    for(int i=0; i<R; i++) for(int j=0; j<C; j++) cin>>senbei[i][j];
    int ans=0;
    for(int bit=0; bit<(1<<R); bit++){
      int cnt=0;
      for(int i=0; i<C; i++){
        int c=0;
        for(int j=0; j<R; j++){
          if((bit>>j)&1) c+=1-senbei[j][i];
          else c+=senbei[j][i];
        }
        cnt+=max(c,R-c);
      }
      ans=max(ans,cnt);
    }
    cout<<ans<<en
  }
}
