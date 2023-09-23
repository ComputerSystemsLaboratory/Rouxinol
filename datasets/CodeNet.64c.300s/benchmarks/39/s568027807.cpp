#include <iostream>
using namespace std;

int fourNum(int n);

int main(void){
  int n;
  int ans;

  while(cin >> n){
    ans = fourNum(n);
    cout << ans << "\n";
  }

}

int fourNum(int n){
  int sum;
  int cnt = 0;

  for(int i = 0; i <= 9; i++){
    if(i > n){
      break;
    }

    for(int j = 0; j <= 9; j++){
      if((i+j) > n){
        break;
      }

      for(int k = 0; k <= 9; k++){
        if((i+j+k) > n){
          break;
        }

        for(int l = 0; l<= 9; l++){
          sum = i + j + k + l;
          if(sum > n){
            break;
          }

          if(sum == n){
            cnt++;
            break;
          }
        }
      }
    }
  }
 return cnt;
}