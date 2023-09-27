#include <iostream>
#include <string>

using namespace std;

class job {
  string name;
  int time;
public:
  job(){
    this->name = "";
    this->time = 0;
  }
  job(string name, int time){
    this->name = name;
    this->time = time;
  }
  job(job const &j){
    this->name = j.name;
    this->time = j.time;
  }
  void timeSubtract(int q){
    if (time < q){
      time = 0;
    }
    time = time - q;
  }
  int getTime(){
    return time;
  }
  string getName(){
    return name;
  }
};

class que {
  job data[100001];
  int topIndex;
  int tailIndex;
  void inc(int &idx){
    idx++;
    idx %= sizeof(data)/sizeof(data[0]);
  }
public:
  que(){
    topIndex = 0;
    tailIndex = 0;
  }
  void enque(job &j){
    data[tailIndex] = j;
    inc(tailIndex);
  }
  job deque(){
    int index = topIndex;
    inc(topIndex);
    return data[index];
  }
  bool isEmpty(){
    return tailIndex == topIndex;
  }
};

int main(int argc, char const *argv[]) {

  int n; //?????????????????°
  int q;//???????????????
  que jobque;
  cin >> n;
  cin >> q;
  for (int i = 0; i < n; i++) {
    int jobtime;
    string jobname;
    std::cin >> jobname;
    std::cin >> jobtime;
    job j(jobname, jobtime);
    jobque.enque(j);
  }
  int t = 0;
  while (!jobque.isEmpty()) {
    job j = jobque.deque();
    if (j.getTime() > q){
      j.timeSubtract(q);
      jobque.enque(j);
      t += q;
    }else {
      t += j.getTime();
      std::cout << j.getName() << ' ' << t << '\n';
    }
  }
  return 0;
}