#include <iostream>
using namespace std;

int main(){
  int t;
  while((cin >> t), t){
    int num=0;
    t = 1000-t;
    while(t>=500){
      num++;
      t-=500;
    }
    while(t>=100){
      num++;
      t-=100;
    }
    while(t>=50){
      num++;
      t-=50;
    }
    while(t>=10){
      num++;
      t-=10;
    }
    while(t>=5){
      num++;
      t-=5;
    }
    while(t>=1){
      num++;
      t-=1;
    }
    cout << num << endl;
  }
  return 0;
}