#include <cstdio>

int search(int a[],int n,int key){
  int i=0;
  a[n]=key;
  while(a[i]!=key) i++;
  return i != n;
}

//key????????£??????true,???????????°false????????????

int main(){
  int n,q,key,a[10001],cnt=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",&a[i]);
  scanf("%d",&q);
  for(int j=0;j<q;j++){
    scanf("%d",&key);
    cnt+=search(a,n,key);
  }
  printf("%d\n",cnt);
  return 0;
}