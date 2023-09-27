#include <stdio.h>
#include <algorithm>

using namespace std;

typedef struct {
  int v;
  int i;
} data;

data map[100];

int greater(data a, data b){
  if(a.v > b.v) return 1;
  else if(a.v == b.v) return a.i < b.i;
  else return 0;
}

int main(){
  int i;
  for(i=0;i<100;i++) map[i].i=i+1,map[i].v = 0;

  int n;
  while(scanf("%d", &n)!=EOF) map[n-1].v++;

  sort(map, map+100, greater);

  int v = map[0].v;

  for(i=0;i<100;i++){
    if(map[i].v == v) printf("%d\n", map[i].i);
    else break;
  }
}