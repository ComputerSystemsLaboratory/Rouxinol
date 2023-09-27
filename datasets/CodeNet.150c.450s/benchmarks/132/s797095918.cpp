#include <iostream>
#include <utility>
using namespace std;

int main(void){
  while(1){
    int stone[50];
    for(int k = 0 ; k < 50 ; k++){stone[k] = 0;}

    int bowl;
    int n, p;  // n???????£?????????°???p????°????????????°
    cin >> n;
    cin >> p;

    if(n == 0 && p == 0){return 0;}

    bowl = p;

    bool flg = true;
    int i;
    int ans;

    for(i = 0 ; flg ; i = (i+1) % n){

      if(bowl == 0){
        bowl = bowl + stone[i];
        stone[i] = 0;
      }else{
        stone[i] ++;
        bowl--;
      }

      if(bowl == 0){
        for(int j = 0 ; j < n ; j++){
          if(stone[j] == p){
            flg = false;
            ans = j;
          }
        }
      }

    }

    cout << ans << endl;
  }
}