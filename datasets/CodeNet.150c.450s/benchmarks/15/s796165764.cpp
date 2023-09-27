/* Linear Search */
#include<iostream>
using namespace std;
int main(){
  int n, q, cnt = 0;
  
  cin >> n;
  int s[n];
  for(int i = 0; i < n; i++) cin >> s[i];

  cin >> q;
  int t[q];
  for(int j = 0; j < q; j++) cin >> t[j];

  for(int i = 0; i < q; i++){
    for(int j = 0; j < n; j++){
      if(t[i] == s[j]){
        cnt++;
        break;
      }
    }
  }

  cout << cnt << endl;
}