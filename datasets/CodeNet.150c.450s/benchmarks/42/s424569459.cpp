#include <iostream>
#include <cmath>
#include <sstream>

const int QUEUE_SIZE = 100000;

struct Process {
  int time;
  int remain;
  std::string name;
};

int main() {
  int n = 0;
  int q = 0;

  std::cin >> n;
  std::cin >> q;

  struct Process queue[QUEUE_SIZE];
  int count = 0;

  int front = 0;
  int rear = 0;

  for (int i = 0; i < n; i++) {
    std::cin >> queue[i].name;
    std::cin >> queue[i].time;

    rear++;
  }

  int time = 0;

  while (front != rear) {
    struct Process p = queue[front];
    front++;
    
    front = front % QUEUE_SIZE;
    
    p.time -= q;

    if (p.time > 0) {
	time += q;
      
	queue[rear] = p;
	rear++;

	rear = rear % QUEUE_SIZE;
      } else {
	time += q + p.time;
      
	std::cout << p.name << " " << time << std::endl;;
      }
  }
  
  return 0;
}