#include<stdio.h>


int parent(int i){
  return i/2;  
}
int left(int i){
  return 2*i;
}
int right(int i){
  return 2*i+1;
}
int main(){
  int i,len,a[251];
  
  
  scanf("%d",&len);
  for(i=1;i<=len;i++){
    scanf("%d",&a[i]);
   }
  for(i=1;i<=len;i++){
    printf("node %d: key = %d, ",i,a[i]);
    if(parent(i)>=1){
      printf("parent key = %d, ",a[parent(i)]);
    }
    if(left(i)<=len){
      printf("left key = %d, ",a[left(i)]);
    }
    if(right(i)<=len){
      printf("right key = %d, ",a[right(i)]);
    }
    puts("");  
  }

  return 0;
}

	    