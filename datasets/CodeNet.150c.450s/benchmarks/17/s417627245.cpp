#include<iostream>
#include<algorithm>
#define REP(i,n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
  int in[5];
  REP(i,5) cin >> in[i];
  sort(in, in + 5, greater<int>());
  REP(i,4) cout << in[i] << " ";
  cout << in[4] << "\n";
}