#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
  int n;
  int mx, mn;
  int sum;
  cin >> n;
  while(n != 0){
    mx = 0;
    mn = 1e9;
    sum = 0;
    int in;
    for(int i = 0; i < n; i++){
      cin >> in;
      mx = max(mx, in);
      mn = min(mn, in);
      sum += in;
    }
    sum -= mx + mn;
    cout << sum / (n - 2) << endl;
    cin >> n;
  }
      

}