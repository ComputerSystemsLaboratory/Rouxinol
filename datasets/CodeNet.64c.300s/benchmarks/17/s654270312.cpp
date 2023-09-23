#include <iostream>
#include <utility>
using namespace std;

int main(void){
  while(1){
    int x,y;
    int s;
    cin >> x;
    cin >> y;
    cin >> s;

    if(x == 0 && y == 0 && s == 0){return 0;}

    int max = -1;
    for(int i = 1 ; i < s ; i++){
      for(int j = 1 ; j < s ; j++){
          if( i * (100 + x) / 100 + j * (100 + x) / 100 == s){
            int temp = i * (100 + y) / 100 + j * (100 + y) / 100;
            if(max < temp){max = temp;}
          }
      }
    }

    cout << max << "\n";
  }

}