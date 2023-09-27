#include<cstdio>

const int MAX_V = 45;
int fib_array[MAX_V]{0};
void make_fib_array(){
  fib_array[0]=1;
  fib_array[1]=1;
  for(int i=2;i<MAX_V;i++)
    fib_array[i]=fib_array[i-1]+fib_array[i-2];
}
int main(){
  make_fib_array();
  int n; scanf("%d",&n);
  printf("%d\n",fib_array[n]);
}