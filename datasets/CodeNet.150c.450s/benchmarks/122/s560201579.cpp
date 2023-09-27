#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;


int main(){
  vector<int> pop_num;
  string str;
  priority_queue<int> que;
  int num;
  int pop;
  int i;
  
  while(true){
    cin >>str;
    if(str == "insert"){
      cin >>num; 
      que.push(num);
    }else if(str == "extract"){

      pop_num.push_back(que.top());
      que.pop();
    }else if(str == "end"){
      break;
    }
  }

  for(int i = 0;i < pop_num.size();i++){
    cout << pop_num[i]<<endl;
  }

  
  /* while(!que.empty()){
    cout <<que.top()<<endl;
    que.pop();
  }
  */
  return 0;
}

