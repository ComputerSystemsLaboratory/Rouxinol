#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
  int n;
  int p;
  int a[100];
  int b[100];
  int flag = 0;
  int i = 0;
  int pp;
  while(cin >> n >> p){
    pp = p;
    for(int j = 0;j < n;j++){
      a[j] = 0;
    }
    i = 0;
    flag = 0;
    if(n == 0 && p == 0){
      break;
    }
    while(flag == 0){
      if(p > 0){
        a[i] += 1;
        p -= 1;
      }else{
        p = a[i];
        a[i] = 0;
      }
      if(a[i] == pp){
        cout << i << endl;
        flag = 1;
      }
      i++;
      if(i == n){
        i = 0;
      }
    }
  }
}
  