#include <iostream>
using namespace std;

bool p[1000100];

void erato(){
  fill(p, p + 1000100, true);
  p[0] = p[1] = false;

  for(int i = 2; i * i <= 1000100; i++){
    if(!p[i]) continue;
    for(int j = i + i; j < 1000100; j += i){
      p[j] = false;
    }
  }
}

int main(){
  erato();

  int a, d, n;

  while(cin >> a >> d >> n, a || d || n){
    while(true){
      if(p[a]){
        n--;
      }
      if(n == 0){
        break;
      }
      a += d;
    }

    cout << a << endl;
  }
}