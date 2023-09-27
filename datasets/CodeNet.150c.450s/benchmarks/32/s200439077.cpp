#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <string>
#define FI first
#define SE second
#define PF push_front
#define PB push_back
#define POF pop_front
#define POB pop_back
#define MA make_pair
#define ll long long
#define VE vector<int>
#define VP vector<pair<int,int> >
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)
#define YES(i) cout<<(i?"YES":"NO")<<endl
#define Yes(i) cout<<(i?"Yes":"No")<<endl
using namespace std;
//
const int INF=1e9+7;
const int mod=1e9+7;
//
int main(){
  int M,mi,ma;
  int P[200];
  while(1){
    cin>>M>>mi>>ma;
    if(M==0){
      break;
    }
    FOR(i,0,M){
      cin>>P[i];
    }
    int cnt=0,ans;
    FOR(i,mi-1,ma){
      if(cnt<=P[i]-P[i+1]){
        cnt=P[i]-P[i+1];
        ans=i+1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

