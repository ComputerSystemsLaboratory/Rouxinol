#include<iostream>
#include<queue>

using namespace std;

struct process{
  string name;
  int time;
};

int main(){
  int n, q, overall_time = 0;
  cin >> n >> q;
  queue<process> S;
  process temp;
  for(int i = 0; i < n; i++){
    cin >> temp.name >> temp.time;
    S.push(temp);
  }
  while(!S.empty()){
    temp = S.front();
    S.pop();
      if(temp.time <= q){
        overall_time += temp.time;
        cout << temp.name << " " << overall_time << endl;
      }else{
        overall_time += q;
        temp.time -= q;
        S.push(temp);
      }
  }
  return 0;
}