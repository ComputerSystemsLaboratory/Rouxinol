#include <bits/stdc++.h>
using namespace std;
const int LOW = INT_MIN;
int main(){
  int minv;
  int mx = LOW;
  int n;
  int data;
  cin >> n;
  cin >> data;
  minv = data;
  for(int i = 1;i < n;i++){
    cin >> data;
    mx = max(mx,data - minv);
    minv = min(minv,data);
  }
  cout << mx << endl;
  exit(0);
}