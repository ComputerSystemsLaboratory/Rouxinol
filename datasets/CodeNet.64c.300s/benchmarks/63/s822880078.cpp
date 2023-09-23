#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  long a, b;
  long l, m, n;
  while (scanf("%ld %ld", &a, &b) != EOF){
    m = a;
    n = b;

    while (1){
      if (m <= n){
        int t = m;
        m = n;
        n = t;
      }

      if (n == 0){
        cout << m << " " << a * b / m << "\n";
        break;
      }

      l = m % n;
      m = n;
      n = l;

    }

    if (a <= 0 || b <= 0){
      break;
    }
  }

  return 0;
}