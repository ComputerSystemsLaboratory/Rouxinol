#include <iostream>
#include <string>
#include <vector>
//#include <pair>
#include <utility>
#include <queue>

using namespace std;
int main(){
  int N;
  int q;
  int total_time = 0;
  cin >> N;
  cin >> q;
  queue<pair<string, int> > tasks;

  for(int i = 0; i < N; ++i){
    string task_name;
    int task_time;
    cin >> task_name;
    cin >> task_time;
    tasks.push(make_pair(task_name, task_time));
  }
  
  //compute
  while(!tasks.empty()){
    auto task = tasks.front(); tasks.pop();

    if(task.second <= q){
      total_time += task.second;
      cout << task.first << " " << total_time 
	   << endl;
    }
    else{
      total_time += q;
      task.second -= q;
      tasks.push(task);
    }
  }
  

  return 0;
}