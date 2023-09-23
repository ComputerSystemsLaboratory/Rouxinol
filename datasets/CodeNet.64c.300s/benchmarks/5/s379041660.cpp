#include<iostream>
using namespace std;
int main(){
  int x, buf, i, j;
  int top[3];
  for(i = 0; i < 3; i++)
    top[i] = 0;

  for(i = 0; i < 10; i++){
    cin >> x;
    if(x > top[2]){
      top[2] = x;
      j = 2;
      while(j > 0){
        if(top[j-1] <top[j]){
          buf = top[j-1];
          top[j-1] = top[j];
          top[j] = buf;
          j--;
        }else{
          break;
        }
      }
    }
  }

  for(i = 0; i<3; i++)
    cout << top[i] << '\n';

  return 0;
}