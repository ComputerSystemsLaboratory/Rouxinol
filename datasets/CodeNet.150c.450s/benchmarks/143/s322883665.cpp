#include<bits/stdc++.h>
using namespace std ; 
#define rep(i,n) for(int i = 0 ; i < (n) ; i++)
using ll = long long ; 
using P = pair<int , int>;

const int MX = 100005 ; 

int main(){
  int n ; 
  cin >> n ;
  vector<ll> cnt(MX) ; 
  rep(i , n){
    int a ; 
    cin >> a ; //最初の数列の値
    cnt[a]++ ; //インデックスと同じ値の要素がいくつあるか
  }
    ll tot = 0 ; //数列の和
    rep(i,MX) tot += i*cnt[i] ; 
  
  int q ; 
  cin >> q ; 
  
  rep(i,q){
    int b , c ; 
    cin >> b >> c ; 
    tot += (c-b)*cnt[b] ;  
    cnt[c] += cnt[b] ;  
    cnt[b] = 0 ;
    cout << tot << endl ; 
  }
  
}