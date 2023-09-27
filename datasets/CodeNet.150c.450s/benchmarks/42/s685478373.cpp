#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
  std::queue<int> quet;
  std::queue<string> quen;

  int n, q, i, time, sum_times=0;
  string name;

  cin >> n >> q;

  for(i=0;i<n;i++){
    cin >> name >> time ;
    quen.push(name);
    quet.push(time);
  }
  
  while(quen.size()!=0){

    if(quet.front()<=q){
      cout << quen.front() << " " << quet.front()+sum_times << "\n";
      sum_times += quet.front();
      quen.pop();
      quet.pop();
    }
    
    else{
      name = quen.front();
      time = quet.front() - q;
      quen.pop();
      quet.pop();
      quen.push(name);
      quet.push(time);
      sum_times += q;
    }
      
  
  }
  return 0;
}