#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX (1 << 17)
int n, seg[MAX * 2 - 1];
void init( int size){
  n = 1;
  while(n < size) n *= 2;
}
int query( int a, int b, int k, int l, int r){
  if(r <= a || b <= l) return 0;
  if(a <= l && r <= b) return seg[k];
  int vl = query( a, b, k * 2 + 1, l, (l + r) / 2);
  int vr = query( a, b, k * 2 + 2, (l + r) / 2, r);
  return vl + vr;
}
void update( int i, int x){
  i += n - 1;
  seg[i] += x;
  while( i > 0 ){
    i = ( i - 1 ) / 2;
    seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
  }
}
int main(){
  int size, q;
  scanf("%d %d", &size, &q);
  init(size);
  while(q--){
    int com, x, y;
    scanf("%d %d %d", &com, &x, &y);
    if( com == 0 ) update( x - 1, y );
    else printf("%d\n", query( x - 1, y, 0, 0, n));
  }
}