#include<iostream>
#include<cstdio>
#include<string.h>
#define LEN 1000001

using namespace std;

typedef struct pp {
  char name[100];
  int t;
} P;

P Q[LEN];
int head, tail;

void enqueue(P x) {
  Q[tail] = x;
  tail = (tail+1)%LEN;
}

P dequeue() {
  P x = Q[head];
  head = (head+1)%LEN;
  return x;
}

int min(int a, int b){
  return (a<b)?a:b;
}

int main() {
  P u;
  int elaps = 0, c;
  int q, n, i;
  scanf("%d %d", &n, &q);
  for(i = 0; i < n; i++) {
    scanf("%s %d", Q[i].name, &Q[i].t);
  }
  head = 0;
  tail = n;

  while(head != tail) {
    u = dequeue();
    c = min(q, u.t);
    u.t -=c;
    elaps += c;
    if(u.t > 0) enqueue(u);
    else {
      printf("%s %d\n", u.name, elaps);
    }
  }

  return 0;
}

