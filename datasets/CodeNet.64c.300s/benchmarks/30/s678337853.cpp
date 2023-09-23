#include <iostream>
using namespace std;


int main(){

  while(1){
    int n;
    cin >> n;
    if(n==0)break;
    n = 1000 - n;
    int ans=0;
    if(n >= 500){
      n -= 500;
      ans++;
    }
    while(n >= 100){
      n-=100;
      ans++;
    }
    if(n >= 50){
      n-=50;
      ans++;
    }
    while(n >= 10){
      n-=10;
      ans++;
    }
    if(n >= 5){
      n-=5;
      ans++;
    }
    ans += n;
 
  cout << ans <<endl;
  }


}