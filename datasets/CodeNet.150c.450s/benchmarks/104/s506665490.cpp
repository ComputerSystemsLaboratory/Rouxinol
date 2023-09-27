#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define llong long long

int main() {
  int w,n;
  scanf("%d %d", &w, &n);
  int data[w+1];
  REP(i,w+1){
    data[i] = i;
  }
  REP(i,n) {
    int a,b;
    scanf("%d,%d", &a, &b);
    swap(data[a],data[b]);
  }
  FOR(i,1,w+1) {
    printf("%d\n",data[i]);
  }
  return 0;
}