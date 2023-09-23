#include <iostream>
#include <cmath>
#define NUM 10000
#define rep(i,a,b) for(i = a; i < b; i++)
using namespace std;

int isPrime(int);

int main(void) {

  int i, n, judge, count = 0;
  int T[NUM] = {};

  cin >> n;

  rep(i,0,n) {

    cin >> T[i];

  }

  rep(i,0,n) {

    judge = isPrime(T[i]);

    if(judge == 1) {

      count++;

    }

  }

  cout << count << endl;

  return 0;

}

int isPrime(int x) {

  int i;

  if(x == 2) {

    return 1;

  } else if(x <= 1 || x % 2 == 0) {

    return 0;

  }

  for(i = 3; i <= sqrt(x); i += 2) {

    if (x % i == 0) {

      return 0;

    }

  }

  return 1;

}