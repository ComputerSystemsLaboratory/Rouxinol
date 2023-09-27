#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>

using namespace std;
#define LEN 1000000

struct P{
  char name[100];
  int time;
};

P Q[LEN];
int head = 0;
int tail = 0;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1) % LEN;
}

P dequeue(){
  P x = Q[head];
  head = (head + 1) % LEN;
  return x;
}

int main(int argc, const char * argv[]) {
  int n, q;
  int elaps = 0;

  cin >> n >> q;
  
  for(int i=0; i<n; i++){
    cin >> Q[i].name >> Q[i].time;
    enqueue(Q[i]);
  }
  tail = n;
  while(head != tail){
    P p = dequeue();
    int mtime = min(p.time, q);
    elaps += mtime;
    p.time -= mtime;
    if(p.time > 0){
      enqueue(p);
    }else{
      cout << p.name << " " << elaps << endl;
    }
  }
  
  return 0;
}

