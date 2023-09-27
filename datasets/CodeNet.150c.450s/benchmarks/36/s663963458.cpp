#include <iostream>
#include <cstdio>
using namespace std;

int f(int d,int i){
  int s;

  s = d * i;

  return s * s;
}

int main(){
  int d, sum;

  while(scanf("%d", &d) != -1){
    sum = 0;

    for(int i = 1;d * i < 600;i++){
      sum = sum + f(d, i) * d;
    }

    cout << sum << endl;
  }
  return 0;
}