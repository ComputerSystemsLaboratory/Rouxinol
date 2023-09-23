#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int main(){
  int x[101]={0};
  int n;
  while(cin>>n) x[n]++;
  int maxi=-INF;
  rep(i,101)if(maxi<x[i])maxi=x[i];
  rep(i,101)if(maxi==x[i])cout<<i<<endl;
  return 0;
}