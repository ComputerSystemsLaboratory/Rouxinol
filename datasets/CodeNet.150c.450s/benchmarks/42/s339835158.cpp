#include <iostream>
#define N 1000000 
using namespace std;
int head,tail;
struct po{
  int x;
  string name;
};
po Q[N];

void pop(){
  head=(head+1)%N;  
}

void push(po x){
  Q[tail]=x;
  tail=(tail+1)%N;
}

po front(){return Q[head];}

int main(){
  int n,q;
  cin>>n>>q;
  string str;
  for(int i=0,a;i<n;i++){
    cin>>str>>a;
    po t;
    t.x=a,t.name=str;
    push(t);
  }

  int time=0;
  while(head!=tail){
    po t=front();pop();
    time+=min(q,t.x);
    if(t.x<=q)cout << t.name <<" "<<time<<endl; 
    else t.x-=q,push(t);
  }
  return 0;
}