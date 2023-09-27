#include<stdio.h>
#include<string.h>
#define LEN 1000000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail=1, n;

void enqueue(P x){
  strcpy(Q[tail].name,x.name);
  Q[tail].t = x.t;
  if( tail + 1 == LEN )tail = 0;
  else tail++;

}

P dequeue(){
  P x;
  x = Q[head];
  if( head + 1 == LEN )head = 0;
  else head++;
  return x;
}


int main(){
  int elaps = 0, ans=0;
  int i, q, c=0, p_count=0;
  P u;

  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    if( strlen(Q[i].name) > 10 ){
      printf("%s\n", Q[i].name);
      p_count++;
      break;
    }
    scanf("%d", &Q[i].t);
    enqueue(Q[i]);
  }
  
  while(1){
    c++;
    if( n == p_count )break;
    if( Q[c].t - q > 0 ){
      ans += q;
      Q[c].t -= q;
      enqueue(Q[c]);
    }    
    else{
      ans += Q[c].t;
      printf("%s %d\n", Q[c].name, ans);
      p_count++;
      Q[c] = dequeue();
    }
  }

  return 0;
}