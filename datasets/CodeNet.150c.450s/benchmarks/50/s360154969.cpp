#include<iostream>
using namespace std;

int coin[6] = {500,100,50,10,5,1};

int main(){

    int input,money,ans;

    while(1){
      cin >> input;
      if(input == 0){
        break;
      }
      money = 1000 - input;

      ans = 0;

      for(int i=0;i<6;i++){
        ans += money/coin[i];
        money = money % coin[i];
        if(money==0){
          break;
        }
      }
      cout << ans << endl;
    }


    return 0;
}