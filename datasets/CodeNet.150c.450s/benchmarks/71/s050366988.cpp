#include <iostream>
using namespace std;

int main(){
  int memo[51] = {0};
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++)
      memo[i + j]++;
  int n;
  while(cin >> n){
    int res = 0;
    for(int i = 0; i <= n; i++)
      res += memo[i] * memo[n - i];
    cout << res << endl;
  }
}