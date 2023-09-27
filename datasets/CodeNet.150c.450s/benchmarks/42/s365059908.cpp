#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail]=x;
  if(tail==LEN) tail=1;
  else tail++;
  
  
}

P dequeue(){

  P x=Q[head];
  if(head==LEN) head=1;
  else head++;
  return x;
}


int main(){
  int elaps = 0, c=0;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head=1;
  tail=n+1;
  for(i=1;i<=n+c;i++){
    if( Q[head].t<=q){
      elaps+=Q[head].t;
      u=dequeue();
      printf("%s %d\n",u.name,elaps);
    }
    else{
      elaps+=q;
      Q[head].t-=q;
      enqueue(Q[head]);
      dequeue();
      c++;
    }
  }
      
    
  return 0;
}