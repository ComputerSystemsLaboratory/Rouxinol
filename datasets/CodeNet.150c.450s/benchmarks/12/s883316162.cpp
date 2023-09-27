#include<iostream>

#define rep(i,n) REP(i,0,n)
#define REP(i,a,n) for(int i = a; i < (int)n; i++)

using namespace std;

signed main(){
  int h;
  int A[251];
  cin >> h;
  for(int i = 1; i <= h; i++){
    cin >> A[i];
  }

  for(int i = 1; i <= h; i++){
    cout << "node " << i << ": key = " << A[i] << ", ";
    if(i/2 >= 1) cout << "parent key = " << A[i/2] << ", ";
    if(2*i <= h) cout << "left key = " << A[2*i] << ", ";
    if(2*i + 1 <= h) cout << "right key = " << A[2*i + 1] << ", ";
    cout << "\n";
  }
}

