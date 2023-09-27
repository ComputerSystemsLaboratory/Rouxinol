#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head = 0, tail = 0, n = 0;

void enqueue(P x){
  //   printf("%d: tail=%d x.name=%s  x.t=%d \n"
  //   ,__LINE__ ,tail   ,x.name    ,x.t);
 
  Q[tail] = x;
  if((tail+1)==LEN){
    tail = 0;
  } else{
    tail++;
  }
  return;
}

P dequeue(){
  P ret;
  ret = Q[head];
  if( head+1 == LEN ){
    head = 0;
  } else{
    head++;
  }
  return ret;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  tail = n;
  
  while(n!=0){
    u = dequeue();
    if(u.t > q ){
      u.t -= q;
      enqueue(u);
      elaps += q;
    }else{
      elaps += u.t;
      n--;
      printf("%s %d\n" ,u.name ,elaps);
    }
  }
  
  return 0;
}