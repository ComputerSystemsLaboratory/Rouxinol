#include<iostream>
#include<cstdio>

using namespace std;

int f (int x) {
  return x * x;
}


int main() {
  int d;
  while(scanf("%d", &d) != EOF) {
    long long sum = 0;
    for(int i = 1; i*d <= 600 - d; i++) {
      sum = sum + f(i*d) * d;
    }
    cout << sum << endl;
  }

  return 0;
}