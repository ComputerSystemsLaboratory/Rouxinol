#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,x;
  while(1){
    cin >> n >> a >> b >> c >> x;
    if(n == 0) break;
    int r[111];
    for(int i=0;i<n;i++){
      cin >> r[i];
    }
    int now = 0;
    int cnt = 0;
    int num = x;
    while(now <= 10001 && cnt != n){
      //num = (a * num + b) % c;
      if(r[cnt] == num) {
	cnt++;
      }
      num = (a * num + b) % c;
      now++;
    }
    if(now == 10002) cout << "-1" << endl;
    else cout << now-1 << endl;
  }
}