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

int coin[6]={500,100,50,10,5,1};
int main(){
  while (1) {
    int n;
    cin>>n;
    if(n==0) break;
    int cost=1000-n;
    int ans=0;
    for(int i=0; i<6; i++){
      int a=cost/coin[i];
      ans+=a;
      cost-=coin[i]*a;
    }
    
    cout<<ans<<en
  }
}
