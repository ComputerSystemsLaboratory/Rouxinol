#include<iostream>
using namespace std;

#define MAX 100000

class Queue_c{

private:  
  int time[MAX];
  string name[MAX];
  int head,tail;
  int sum;

public:

  Queue_c();
  bool isEmpty();
  bool isFull();
  void enqueue(string n, int t);
  void dequeue(int q);

};

Queue_c::Queue_c(){
  head = tail = sum = 0;
}
bool Queue_c::isEmpty(){
  return head==tail;
}
bool Queue_c::isFull(){
  return head==(tail+1)%MAX;
}
void Queue_c::enqueue(string n, int t){

  time[tail]=t;
  name[tail]=n; 

  if(++tail == MAX)
    tail = 0;

}
void Queue_c::dequeue(int q){

  
  if(time[head]-q <= 0){
    sum += time[head];
    cout << name[head]+' ' << sum << endl;
    head++;
  }
  else{
    enqueue(name[head],time[head]-q);
    if(++head == MAX){ head = 0; }
    sum += q;
  }
    
}


int main(){

  int n,q;
  int time;
  string name;

  Queue_c Que;


  cin >> n >> q;


  for(int i=0; i<n; i++){
    cin >> name >> time;
    Que.enqueue(name,time);
  }

  while(!Que.isEmpty()){
    
    Que.dequeue(q);

  }


  return 0;

}