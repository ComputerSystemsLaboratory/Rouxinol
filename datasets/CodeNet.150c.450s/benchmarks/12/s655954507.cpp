#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;

int Parent(int x){return x / 2;}
int Left(int x) {return 2 * x;}
int right(int x){return 2 * x + 1;}

int main(){

  int H;
  int i, l, r, p, A[252];
  cin >> H;
  rep(i,H) cin >> A[i + 1];
  for(i = 1; i <= H ; i ++){
    cout << "node " << i << ": key = " << A[i] << ", ";
    if(Parent(i) >= 1) cout << "parent key = " << A[Parent(i)] << ", ";
    if(Left(i) <= H) cout << "left key = " << A[Left(i)]<< ", ";
    if(right(i) <=H)cout << "right key = " << A[right(i)]<< ", ";
    cout << endl;
  }



  return 0;
}
