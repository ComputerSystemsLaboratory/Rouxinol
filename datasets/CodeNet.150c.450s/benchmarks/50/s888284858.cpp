#include<iostream>
using namespace std;
int main(){

  int a;
  cin >> a;
  while(a != 0){
    
    int coin = 0;
    a = 1000-a;

    if(a>=500){
      coin++;
      a-=500;
    }
    while(a>=100){
      coin++;
      a -= 100;
    }
    if(a>=50){
      coin++;
      a-=50;
    }
    while(a>=10){
      coin++;
      a-=10;
    }
    if(a>=5){
      coin++;
      a-=5;
    }
    cout << coin+a << endl;
    cin >> a;
  }

  return (0);
}