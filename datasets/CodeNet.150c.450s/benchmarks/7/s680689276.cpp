#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int> mlist;
  int i;
  for(i=0;i<10;i++){
    int dt;
    cin>>dt;
    mlist.push(dt);
  }
  for(i=0;i<3;i++){
    cout <<mlist.top()<<endl;
    mlist.pop();
  }

  return 0;
}