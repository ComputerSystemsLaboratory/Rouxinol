#include <iostream>
#include <queue>

int main()
{
  int n, q;
  
  std::cin >> n >> q; // n (number of processes), q (quantum length)
  std::queue< std::pair<std::string, int> > Q; // create a queue of pairs (processs)

  std::string name; // name of process
  int time; // time taken for each process
  
  for (int i = 0; i < n; ++i) {
    std::cin >> name >> time;
    Q.push(make_pair(name, time)); // read pairs into queue
  }

  int time_stamp = 0;
  std::pair<std::string, int> candidate;

  while (!Q.empty()) { 
    candidate = Q.front(); // next candidate to process
    if (candidate.second <= q) { // if less than or equal to quantum
      time_stamp += candidate.second;
      std::cout << candidate.first << " " << time_stamp  << std::endl; //output
      Q.pop(); 
    } else { // if more than quantum, have to enqueue
      time_stamp += q;
      candidate.second -= q; // deduct time by quantum
      Q.pop();
      Q.push(candidate); //enqueue
    }
  }
  return 0;
}