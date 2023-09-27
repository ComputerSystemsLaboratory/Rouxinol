#include<stdio.h>
int seg[(1<<20)];
void init(int n){
  int b=1;
  while(b < n*2) b *= 2;
  for(int i=0;i<b;i++) seg[i] = 0;
}
void add(int i,int x,int ban,int l,int r){
  if(l == i && r == i) seg[ban] += x;
  else {
    int mid = (l+r)/2;
    if(l <= i && i <= mid) add(i,x,ban*2+1,l,mid);
    if(mid < i && i <= r) add(i,x,ban*2+2,mid+1,r);
    seg[ban] = seg[ban*2+1] + seg[ban*2+2];
  }
}
int getsum(int s,int t,int ban,int l,int r){
 
  if(s <= l && r <= t) return seg[ban];
  if(t < l || r < s) return 0;

  int mid = (l+r)/2;
  return getsum(s,t,ban*2+1,l,mid) + getsum(s,t,ban*2+2,mid+1,r);
}
int main(){
  int n,q,c,x,y;
  scanf("%d %d",&n,&q);
  init(n);
  for(int i=0;i<q;i++){
    scanf("%d %d %d",&c,&x,&y);
    if(c == 0) add(x,y,0,1,n);
    if(c == 1) printf("%d\n",getsum(x,y,0,1,n));
  }
  return(0);
}

