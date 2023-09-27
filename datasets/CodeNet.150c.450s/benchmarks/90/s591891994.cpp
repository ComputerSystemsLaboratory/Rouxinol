#include <iostream>
#include <queue>
using namespace std;

int main(){
  int n[101]={0},a,max;
  queue<int> q;
  while(cin>>a)n[a]++;
  max=1;
  while(q.size())q.pop();
  for(int i=1;i<=100;i++){
    if(n[i]>max){
      while(q.size())q.pop();
      q.push(i);
      max=n[i];
    }else if(n[i]==max){
      q.push(i);
    }
  }
  while(q.size()){
    cout<<q.front()<<endl;
    q.pop();
  }
  return 0;
}