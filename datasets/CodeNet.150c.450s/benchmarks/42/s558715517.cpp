#include <iostream>
#include <string>
#include <queue>
#include <stdexcept>

using std::cin;
using std::cout;

struct process {
  std::string name;
  unsigned time;
};

void execute(std::queue<process>& l,const unsigned q){
  unsigned time_now = 0;

  while(!l.empty()){
    process buf = l.front();
    l.pop();
    if(buf.time <= q){
      time_now += buf.time;
      cout << buf.name << ' ' << time_now << '\n';
    }
    else{
      buf.time -= q;
      time_now += q;
      l.push(buf);
    }
  }
}

int main(){
  std::queue<process> l;
  unsigned n,q;
  cin >> n >> q;
  for(unsigned i=0;i<n;i++){
    process buf;
    cin >> buf.name >> buf.time;
    l.push(buf);
  }

  execute(l,q);
}