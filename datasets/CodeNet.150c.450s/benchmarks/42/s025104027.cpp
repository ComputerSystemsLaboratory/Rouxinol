#include <iostream>

#define MIN_N 1
#define MAX_N 100000
#define MIN_Q 1
#define MAX_Q 1000
#define MAX_TIME 50000
#define MAX_SUM_TIME 1000000

#define QUEUE_SIZE MAX_N+1

using namespace std;

struct Process {
  string name;
  int time;
  Process() {}
  Process(string& name, int time)
    : name(name)
    , time(time){}
};

class ProcessQueue {
public:
  ProcessQueue()
    : len(0)
    , headPos(0)
    , tailPos(0) {
  }

  void Enqueue(Process& proc) {
    len++;
    procs[tailPos++] = proc;
    if(tailPos >= QUEUE_SIZE) {
      tailPos = 0;
    }
  }
  Process Dequeue(){
    len--;
    Process proc = procs[headPos++];
    if(headPos >= QUEUE_SIZE) {
      headPos = 0;
    }
    return proc;
  }
  int Length() {
    return len;
  }
private:
  int len;
  int headPos;
  int tailPos;
  Process procs[QUEUE_SIZE];
};

int main() {
  int n, q;
  cin >> n >> q;

  ProcessQueue queue;
  for(int i=0; i<n; i++) {
    string name;
    int time;
    cin >> name >> time;
    Process proc(name, time);
    queue.Enqueue(proc);
  }

  int time = 0;
  while(queue.Length() > 0) {
    Process proc = queue.Dequeue();
    if(proc.time <= q) {
      time += proc.time;
      cout << proc.name << " " << time << endl;
    } else {
      time += q;
      proc.time -= q;
      queue.Enqueue(proc);
    }
  }

  return 0;
}