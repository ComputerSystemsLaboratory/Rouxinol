#include<stdio.h>
 
 int main(){
  int n, a; 
  int y=0;
  int l, m, k;
  scanf("%d", &n);
  int data[n];
  char c[12];
  int i;
 for(i=0;i<n;i++){
    scanf("%s %d",c,&a);
    if(c[0]=='i'){
    data[i]=a;
    }
 else if(c[6]=='F'){
    i-=2;
    n-=2;
    }
 else if(c[6]=='L'){
    i--;
    n--;
    y++;
  }
 else{
    i--;
    n--;
    l=0;
    int j;
    for(j=i;j>=0;j--){
    if(l>0) break;
    if(a==data[j]){
      k=0;
      m=i-j;
      l++;
      while(m!=k++)
    data[j+k-1]=data[j+1+k-1];
      i--;
      n--;
        }  
      }
    }
  }
  for(i=0;i<n-y;i++){
    if(i==n-y-1)
      printf("%d\n",data[n-1-i]);
    else
      printf("%d ",data[n-1-i]);
  }
  return 0;
}