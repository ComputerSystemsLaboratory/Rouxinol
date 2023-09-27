#include <iostream>
#include <string>
using namespace std;

typedef struct {
  string str;
  int t;
} P;

int n,head,tail;
P Q[100001];

void init() {
  head = 0,tail = n;
}

int isEmpty() {
  return head == tail;
}

int isFull(){
  return head == (tail + 1)   % 100000;
}

void enqueue( P x ) {
  if ( isFull() ) cout << "overflow" << endl;
  Q[tail] = x;
  if ( tail + 1 == 100000 ) tail = 0;
  else tail++;
}

P dequeue() {
  if ( isEmpty() ) cout << "underflow" << endl;
  P x = Q[head];
  if ( head + 1 == 100000 ) head = 0;
  else head++;
  return x;
}

int min( int a, int b ) {
  if ( a < b ) return a;
  else return b;
}

int main() {
  int q; cin >> n >> q;
  init();

  for ( int i = 0; i < n; i++ ) cin >> Q[i].str >> Q[i].t;

  int time = 0;
  P u;

  while ( head != tail ) {
    u = dequeue();
    int minn = min(q,u.t);
    u.t -= minn;
    time += minn;
    if ( u.t > 0 ) enqueue(u);
    else cout << u.str << " " << time << endl;
  }
  
  return 0;
}