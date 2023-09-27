#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

#define MAX 100000

int a[MAX+1];

int parent(int i){return i/2;};
int left(int i){return i*2;};
int right(int i){return i*2+1;};

int main(){
  int h; cin >> h;
  REP(i, 1, h) cin >> a[i];

  REP(i, 1, h){
    printf("node %d: ", i);
    printf("key = %d, ", a[i]);
    if(i != 1) printf("parent key = %d, ", a[parent(i)]);
    if(left(i) <= h) printf("left key = %d, ", a[left(i)]);
    if(right(i) <= h) printf("right key = %d, ", a[right(i)]);
    printf("\n");
  }

  return 0;
}



