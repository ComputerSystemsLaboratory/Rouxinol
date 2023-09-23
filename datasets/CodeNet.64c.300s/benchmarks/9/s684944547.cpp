//Debt Hell
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll debt(ll x, int n){
  if(n==0)return x;
  else{
    x*=1.05;
    if(x%1000!=0)return debt(x-x%1000+1000, n-1);
    else return debt(x, n-1);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%lld\n", debt(100000, n));
  return 0;
}