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
  int w,n;
  int array[35];
  cin>>w>>n;
  REP(i,1,w+1)array[i]=i;
  rep(i,n){
    int a,b;
    cin>>a;
    getchar();
    cin>>b;
    swap(array[a],array[b]);
  }
  for(int i=1;i<=w;i++){
    cout<<array[i]<<endl;
  }
  return 0;
}