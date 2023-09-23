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


int test = 0;
/* ここからが本編 */
int f(int x) {
  return x*x;
}
int main(void)
{
  int i,j,k,l;
  int d;


  while(cin >> d) {
    int rep = 0;
    for(i=d; i<600; i+=d){
      rep += f(i)*d;
    }
    cout << rep << endl;
  }
  return 0;
}