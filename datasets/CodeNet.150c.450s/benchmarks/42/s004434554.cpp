#include <bits/stdc++.h>
using namespace std;

typedef struct{
  char name[10];
  int time;
}Data;

void enqueue(void);
void dequeue(void); 

Data Q[100001];

int head, tmp, tail;
int n, q;
int cnt;

int main(){
 
  int cnt = 0;

  cin >> n >> q;

  for(int i = 1 ; i <= n ; i++){
    cin >> Q[i].name >> Q[i].time;
  }

  head = 1; 
  tail = n + 1;

  while(1){
    if(head == tail){
      break;
    }
    if(Q[head].time > q){
      enqueue();
    }else{
      dequeue();
    }
    if(head > n + 1){
      head = 0;
    }else{
      head++;
    }
  }

  return 0;
}

void dequeue(){
  cout << Q[head].name << " " << Q[head].time + cnt << endl;
  cnt += Q[head].time;
}

void enqueue(){
  Q[head].time = Q[head].time - q;
  Q[tail] = Q[head];
  if(tail > n+1){
    tail = 0;
  }else{
    tail++;
  }
  cnt += q;
}