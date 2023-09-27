#include<iostream>
using namespace std;

int count(int n, int x){
  int cnt = 0;
  for (int i = 1; i <= n-2; i++) {
     for (int j = i+1; j <= n-1; j++) {
       for (int k = j+1; k <= n; k++) {
         if (i < j && j < k && i + j + k == x) cnt++;
       }
     }
  }
  return cnt;
}

int main(){
  while(1){
    int n, x;
    cin >> n >> x;
    if (n == 0 && x == 0) break;
    cout <<  count(n, x) << endl;
  }
return 0;
}