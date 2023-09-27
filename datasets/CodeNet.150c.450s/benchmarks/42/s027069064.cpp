#include <iostream>
#include <cstring>
using namespace std;

struct Proc{
  string name;
  int time;
};

class Queue{
private:
  Proc proc[100005];
  int head, tail;
public:
  Queue(){
    head = 0; tail = 0;
  }
  bool isEmpty();
  bool isFull();
  Proc dequeue();
  void enqueue(Proc p);
};

bool Queue::isEmpty(){
  return head == tail;
}

bool Queue::isFull(){
  return head == (tail + 1) % 100005;
}

Proc Queue::dequeue(){
  Proc p = proc[head];
  head = (head + 1) % 100005;
  return p;
}

void Queue::enqueue(Proc p){
  proc[tail] = p;
  tail = (tail + 1) % 100005;
}

int main(void){
  int n, q, time;
  string name;
  Queue que;

  cin >> n >> q;
  for(int i = 0; i < n; i++){
    cin >> name >> time;
    Proc p; p.name = name; p.time = time;
    que.enqueue(p);
  }

  time = 0;
  while(!que.isEmpty()){
    Proc p = que.dequeue();
    int t = p.time - q;
    if(t <= 0){
      time += p.time;
      cout << p.name << " " << time << endl;
    }else{
      p.time = t;
      que.enqueue(p);
      time += q;
    }
  }

  return 0;
}