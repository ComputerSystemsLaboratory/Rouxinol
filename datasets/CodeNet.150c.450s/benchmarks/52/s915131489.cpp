#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> train;
  vector<int> queue;
  int num;

  while(cin >> num){
    if(num != 0){
      train.push_back(num);
    }else{
      queue.push_back(train.back());
      train.pop_back();
    }
  }

  for(int i=0; i<queue.size(); i++){
    cout << queue[i] << endl;
  }
  return 0;
}