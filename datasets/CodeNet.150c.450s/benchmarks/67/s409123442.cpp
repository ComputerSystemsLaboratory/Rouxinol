#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n != 0){
    int ans = 0;
    int num, sum;
    for(int i = 1; i < n; i++){
      sum = 0;
      num = i;
      while(sum < n){
        sum += num;
        num++;
        //cerr << "sum = " << sum << endl;
      }
      if(sum == n)ans++;
    }
    cout << ans << endl;
    cin >> n;
  }

}