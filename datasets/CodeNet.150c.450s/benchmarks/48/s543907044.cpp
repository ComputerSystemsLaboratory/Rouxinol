#include <iostream>
#include <math.h>
using namespace std;
int N, S, y_max, z_max, ans;

int main(){
  while( cin >> N && N > 0){
    for(int i = 0; i <= 1000; i++){
      for(int j = 0; j <= 100; j++){
        if(i == 0 && j == 0) ans = N;
        if(ans > (i + j +(N-i*i-j*j*j)) && N-i*i-j*j*j >= 0) ans = i + j +(N-i*i-j*j*j);
      }
    }


    cout << ans << endl;


  }




}
