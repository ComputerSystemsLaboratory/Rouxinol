#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define PI (3.1415926535)
#define EPS (1e-10)
bool eq(double a, double b){
  return abs(a-b) < EPS;
}

int main(){
  int w,n;
  scanf("%d%d",&n,&w);
  int a[n];
  REP(i,n) a[i] = i;
  REP(i,w){
    int b,c;
    scanf("%d,%d",&b,&c);
    swap(a[b-1],a[c-1]);
  }
  REP(i,n) printf("%d\n",a[i]+1);
  
  return 0;
}