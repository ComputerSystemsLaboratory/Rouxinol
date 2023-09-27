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
#define VE vector<int>
#define PF push_front
#define PB push_back
#define POF pop_front
#define POB pop_back
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
  int N;
  cin>>N;
  cout<<N<<":";
  for(int i=2;i*i<=N;i++){
    while(N%i==0){
      cout<<" "<<i;
      N/=i;
    }
  }
  if(N!=1){
    cout<<" "<<N;
  }
  cout<<endl;
  return 0;
}
