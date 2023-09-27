#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <cmath>
#include <string>
#define FI first
#define SE second
#define VE vector<int>
#define PB push_back
#define MA make_pair
#define LL long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)
#define YES(i) cout<<(i?"YES":"NO")<<endl
#define Yes(i) cout<<(i?"Yes":"No")<<endl
using namespace std;
//
const int INF=1e9+7;
//
int main(){
  int N,K;
  int W[100000];
  cin>>N>>K;
  int ma=0;
  FOR(i,0,N){
    cin>>W[i];
    ma=max(ma,W[i]);
  }
  int L=ma,R=INF;
  while(R>L){
    int M=(L+R)/2;
    int now=0;
    int cnt=1;
    FOR(i,0,N){
      if(now+W[i]<=M){
        now+=W[i];
      }else{
        cnt++;
        now=W[i];
      }
    }
    if(cnt<=K){
      R=M;
    }else{
      L=M+1;
    }
  }
  cout<<R<<endl;
  return 0;
}
