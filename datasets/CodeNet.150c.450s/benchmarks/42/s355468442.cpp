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
    Q[tail] = x;
    if (tail == LEN) {
        //TODO: Head overwrite
        tail = 0;
    } else {
        tail++;
    }
}

P dequeue(){
    P p = Q[head];
    if (head == LEN) {
        head = 0;
    } else {
        head++;
    }
    return p;
}

int count() {
    if (tail >= head) {
        return tail - head;
    } else {
        return (tail + LEN) - head + 1;
    }
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  tail = 0; head = 0;
  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    tail++;
  }

  while (count() > 0) {
      u = dequeue();
      u.t -= q;
      if (u.t <= 0) {
          elaps += q + u.t;
          printf("%s %d\n", u.name, elaps);
      } else {
          elaps += q;
          enqueue(u);
      }
  }

  
  return 0;
}
