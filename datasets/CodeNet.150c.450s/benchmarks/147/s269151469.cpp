#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i = 1;  i <= n; ++i){
    int cnt = 0;
    int N = i;
    for(int x = 1; x * x<= n; ++x){
      for(int y = 1; y * y <= n; ++y){
        for(int z = 1; z * z <= n; ++z){
          int cal =  x * x + y * y + z * z + x * y + y * z + z * x;
          if( cal < N)
           	continue;
          if(cal == N)
            ++cnt;
        	break;
        }
      }
    }
    cout << cnt << '\n';
  }
}