#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  
  int n,sum;
  int count_sum;

  while(1){
    count_sum = 0;
    cin >> n >> sum;

    if(n==0 && sum==0){
      break;
    }else{
      for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
          for(int k=j+1; k<=n; k++){
            if((i+j+k)==sum){
              count_sum++;
            }
          }
        }
      }
    }

    cout << count_sum << endl;
  }
}