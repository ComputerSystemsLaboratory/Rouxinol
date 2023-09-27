#include<iostream>
using namespace std;

typedef long long ll;

int main(){
  ll n,r,minv=10000000000,maxv=-10000000000; //初期値に十分大きなあたいと十分小さなあたいをとる
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> r; //基準となる数字
    if ( maxv < r-minv ) maxv = r-minv; // maxvよりr-minvのほうが大きい場合
    if ( minv > r ) minv = r; // minvよりrが小さい場合
  }
 
  cout << maxv << endl;
  return 0;
}