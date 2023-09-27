#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define rep(i,n) for((i)=0;(i)<(n);(i)++)
#define max(a,b) ((a)>(b) ? (a) : (b))
#define min(a,b) ((a)<(b) ? (a) : (b))
typedef long long ll;
typedef long double ld;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int main(){
  ll n,m,k,i,j,result[10010]={0};
  ll tmp;
  cin >> n;
  m = ceil(sqrt(n));
  for(i=1;i<=m;i++){
    for(j=1;j<=m;j++){
      for(k=1;k<=m;k++){
        tmp = i*i+j*j+k*k+i*j+j*k+k*i;
        if(tmp<=10000) result[tmp]++;
      }
    }
  }
  for(i=1;i<=n;i++) cout << result[i] << endl;
  return 0;
}