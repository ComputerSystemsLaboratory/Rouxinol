#include <bits/stdc++.h>
using namespace std;

int f(int x, int y, int z) {
  return x*x + y*y + z*z + x*y + y*z + z*x;
}

int main(){
  int n, sum[100000]={0};
  cin >> n;

    for(int x=1; x <= 100; x++){
      for(int y=1; y <= 100; y++){
        for(int z=1; z <= 100; z++){
          sum[f(x,y,z)]++;
        }
      }
    }
  
 	for(int i=1; i <= n; i++){
      cout << sum[i] << endl;
    }
}
