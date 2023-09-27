#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
using ll = long long;
using VL=vector<ll>;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
const long long INF =  999999999;



//n以下の素数のvector配列をprimeに格納する。
//エラトステネスの篩
void eratos(vector<ll>& prime,int n){
  bool used[n+10];
  fill(used,used+n+2,false);
  for(int i=2;i<=n;i++){
    if(!used[i]){
      prime.push_back(i);
      int j=i;
      while(j<=n){
        used[j]=true;
        j+=i;
      }
    }
  }
}
int main(){
  vector<ll> prime;
  int N,sn;
  cin>>N;
  sn=sqrt(N);
  eratos(prime,sn);
  cout<<N<<":";
  REP(i,prime.size()){
    while(N%prime[i]==0){
      cout<<" "<<prime[i];
      N=N/prime[i];
    }
  }
  if(N!=1)cout<<" "<<N;
  cout<<endl;
}

