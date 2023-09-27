#include<stdio.h>
int parent(int);
int left(int);
int right(int);


int main(){
  int n,i,a[100001];

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }

  for(i=1;i<=n;i++){
    printf("node %d: ",i);
    printf("key = %d, ",a[i]);
    if(parent(i))printf("parent key = %d, ",a[parent(i)]);
    if(left(i)<=n)printf("left key = %d, ",a[left(i)]);
    if(right(i)<=n)printf("right key = %d, ",a[right(i)]);
    printf("\n");
  }

  return 0;
}


int parent(int x){
  return x/2;
}


int left(int x){
  return x*2;
}

int right(int x){
  return x*2+1;
}

  

