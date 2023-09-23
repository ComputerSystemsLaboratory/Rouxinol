#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <time.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define SQR(X) ((X)*(X))

/* Eratosthenes(int prime[],int n)は
nまでの素数をprimeに、2,3,と入れていきます */
/* 実行後arr[i]はiが素数の時1になります */
static ull prime[1000000];
ull Eratosthenes(ull N){
  static ull arr[15000005];
  for(ull i = 0; i < N; i++){
    arr[i] = 1;
  }
  for(ull i = 2; i < sqrt((double)N); i++){
    if(arr[i]){
      for(ull j = 0; i * (j + 2) < N; j++){
        arr[i *(j + 2)] = 0;
      }
    }
  }
  ull a = 0;
  for(ull i = 2; i < N; i++){
    if(arr[i]){
      prime[a++] = i;
    }
  }
  return a;
}

int test = 0;
/* ここからが本編 */
int main(void)
{
  int i,j,k,l;
  int rep = 100000;
  int n;
  while(cin >> n) {
    cout << Eratosthenes(n+1) << endl;
  }
  return 0;
}