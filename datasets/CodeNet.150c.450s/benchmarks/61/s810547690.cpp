#include<bits/stdc++.h>
using namespace std;

int a, b, c, x;
int gen(int x){
  return (a * x + b) % c;
}

int main(){
  int n;
  while(cin >> n >> a >> b >> c >> x, n || a || b || c || x){
    int cnt = 0;
    int y;
    bool ok = true;
    for(int i = 0; i < n; i++){
      cin >> y;
      
      if(i > 0){
        x = gen(x);
        cnt++;
      }
      while(x != y){
        x = gen(x);
        cnt++;
        if(cnt > 10000)break;
        if(x == y)break;
      }
    }
    cout << ((cnt > 10000) ? -1 : cnt) << endl;
  }
}