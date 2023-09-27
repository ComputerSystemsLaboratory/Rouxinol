#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll int64_t
#define all(v) v.begin(), v.end()
#define bitrep(n) for(int bit=0;bit<(1<<n);bit++)

//素数判定機
bool isprime(int x){
  if(x<2) return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n ;

  cout << n <<':';
  
  while(1<n){
    if(n%2==0){
      cout<< ' ' << 2; n/=2; continue;
    }
    for(int i=3;i<=n;i+=2){
      if(n%i==0){
        if(isprime(i)){
          cout<< ' ' << i; n/=i; break;
        }
      }
      if(i*i>n){//クソでか素数対策。素数判定そのものの時と同じ理論で、その数自身の√まで、割れるかどうか試した後、無理だった場合その時点で素数なのでそのまま出力して終わり
        cout << ' ' << n << endl; return 0;
      }
    }
  }

  cout << endl;

  return 0;
}
