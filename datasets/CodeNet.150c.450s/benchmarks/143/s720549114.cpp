#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)

int main(){
  long long n;	cin >> n;
  map<long long,long long>	A;
  rep(i,n){
    long long a;	cin >> a;
    A[a]++;
  }
  
  long long sum=0;
  for (auto p : A) {
    auto key = p.first;
    auto value = p.second;
    sum+=key*value;
  }
  
  long long q;	cin >> q;
  rep(i,q){
    long long b,c;	cin >> b >> c;
    if(A.count(b)){
      sum+=(c-b)*A[b];
      A[c]+=A[b];
      A.erase(b);
    }
   
    cout << sum << endl;
  }
}