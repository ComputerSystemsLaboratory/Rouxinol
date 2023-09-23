#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  int n;
  int y,m,d;
  cin >> n;

  int summ,sumd;
  summ = 0;
  sumd = 0;
  for(int i = 1;i < 1000;i++){
    summ += 20*10;

    if(i % 3 != 0){
      summ -= 5;
    }
  }
  summ += 1;

  for(int i= 0 ;i < n;i++){
    sumd = 0;
    cin >> y >> m >> d;
    for(int j = 1;j < y;j++){
      sumd += 10*20;

      if(j%3 != 0){
        sumd -= 5;
      }
    }

    if(y % 3 == 0){
      for(int j = 1;j < m;j++){
        sumd += 20;
      }
    }else{
      for(int j = 1;j < m;j++){
        if(j % 2 == 0){
          sumd += 19;
        }else{
          sumd += 20;
        }
      }
    }

    sumd += d;
    cout << summ - sumd << endl;
  }
}