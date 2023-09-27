#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define FOR(i,a,b) for(int i=(a);i<(b);++(i))
#define REP(i,n) FOR(i,0,n)

#define dump(x) cerr << #x << " = " <<(x)<<endl;
#define debug(x) cerr << #x << " = " <<(x) << "(L" << __LINE__ << ")" << __FILE__ << endl;

using namespace std;
typedef long long ll;

ll T[100007];

bool is_load(ll p,int n, int k){
   int i;
   ll k_p = p;
   REP(i,n){
    if( (k_p - T[i])<0 ){
      if(k<=1) { 
        return false;
      }
      else{
        k--;
        i--;
        k_p = p;
      }
    }
    else{
      k_p -= T[i];
    }
    if(p<10){
      //cout<<"p "<<p<<" "<<k_p << " " << k << " " << i << endl;
    }
    
   }
   return true;
}

int main(void){
  int i,n,k;
  ll l,m,r;
  cin >> n>> k;
  REP(i,n) cin>> T[i];
  l = 0;
  r = 100000*10000;
  while(r-l>1){
    m = (l+r) >> 1;
    if(is_load(m,n,k)){
      r = m;
    }
    else{
      l =m;
    }
  }
  cout << r << endl;
  return 0;
}