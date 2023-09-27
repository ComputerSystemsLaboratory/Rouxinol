#include <stdio.h>
int  pop();
void push(int);
int d[11],top,n,i;
int main(){
  while(scanf("%d",&n)!=EOF){
  
      if(n==0){
	pop();
        printf("%d\n",d[top+1]);
	}
      else{
        push(n);
      }
    
  }
  
  return 0;
}
void push(int x){
  top++;
  d[top]=x;
}
int pop(){
  top--;
  return d[top+1];
}