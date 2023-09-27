#include <iostream>
using namespace std;

typedef struct{
  char name[16];
  int time;
}process;

process pq[100005];
int qstart=0,qend=0;

void enq(process p){
  pq[qend++]=p;
  if (qend==100005)qend=0;
}

process deq(){
  process t=pq[qstart++];
  if (qstart==100005)qstart=0;
  return t;
}

int main(){
  int n,q,tcnt=0;
  process tp;
  
  cin >> n >> q;
  for (int i=0;i<n;i++){
    cin >> tp.name >> tp.time;
    enq(tp);
  }

  while (qstart!=qend){
    tp = deq();
    //cout << tcnt << " " << tp.name << " " << tp.time << endl;
    if (tp.time<=q){
      tcnt +=tp.time;
      cout << tp.name << " " << tcnt << endl;
      continue;
    }
    tcnt += q;
    tp.time -=q;
    enq(tp);
  }

  return 0;
}