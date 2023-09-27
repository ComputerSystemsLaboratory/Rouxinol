#include <iostream>
using namespace std;

int main(){
  int n,i,buf;

  cin >> n;

  for(i=1 ; i<=n ; i++){
    buf = i;
    if(i%3==0){
      cout << " " << i;
    }else{
      while(buf != 0){
        if(buf%10 == 3){
          cout << " " << i;
          break;
        }
        buf/=10;
      }
    }
  }
  cout << endl;
}