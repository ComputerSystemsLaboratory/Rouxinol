#include <bits/stdc++.h>
using namespace std;

#define MAX 999999
bool flag[MAX+1];

void check_prime_num(int x){

  int way = sqrt(x);

  for(int i=2;i<way+1;++i) {
    if(x%i==0) break;
    else if(way==i) flag[x] = true;
  }

}

int solve(int n){

  int cnt = 0;

  for(int i=0;i<=n;++i){
    if(flag[i]) ++cnt;
  }

  return cnt;
}

int main(){

  int n;

  memset(flag, false, MAX);
  flag[2] = true; flag[3] = true;

  for(int i=4;i<=MAX;++i){ check_prime_num(i); }

  while(cin>>n){ cout << solve(n) << endl; }

}