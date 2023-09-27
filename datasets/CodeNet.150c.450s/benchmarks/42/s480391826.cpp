#include <iostream>
#define L 100005
using namespace std;

struct Robin { char name[100]; int time;};

//queue
int head, tail;

Robin Q[L];

void enqueue(struct Robin x) {
  Q[tail] = x;
  tail = (tail+1) % L;
}

Robin dequeue() {
  Robin x = Q[head];
  head = (head+1) % L;
  return x;
}

int min(int a, int b) { return a < b ? a : b; }

int main() {

  int elapsed = 0;
  int n, q, c;
  cin >> n >> q;

  head = 0;
  Robin u;

  for (int i=0; i < n; i++) {
    cin >> Q[i].name >> Q[i].time;
  }

  tail = n;
  
  while (head != tail) {
	
    u = dequeue();
    c = min(q, u.time);
    u.time -= c;
    elapsed += c;
    if ( u.time > 0 ) enqueue(u);
    else  {
      cout << u.name << " " << elapsed << endl;
    }   
  }

  return 0;
}