#include <iostream>
using namespace std;

#define ASTART (1<<17)
int a[ASTART*2];

void add(int i,int x){
  i+=ASTART-1;
  a[i]+=x;
  while (i>0){
    i=(i-1)/2;
    a[i]=a[i*2+1]+a[i*2+2];
  }
}
long long getsum(int s,int t,int k,int l,int r){
  if (r<=s||l>=t)return 0;
  if (l>=s&&r<=t)return a[k];
  int m=(l+r)/2;
  return getsum(s,t,k*2+1,l,m)+getsum(s,t,k*2+2,m,r);
}

int main(){
  int n,q,com,x,y;
  for (int i=0;i<ASTART*2;i++)a[i]=0;
  cin >> n>>q;

  for (int i=0;i<q;i++){
    cin >> com >> x >> y;
    if (com==0) add(x,y);
    else cout << getsum(x,y+1,0,0,ASTART)<< endl;
  }

  return 0;
}