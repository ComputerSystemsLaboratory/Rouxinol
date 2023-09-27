#include<iostream>
#include<cstdlib>
#include<vector>
#define SIZE 100005
using namespace std;

struct Queue
{
  int list[SIZE];
  int head,tail;
  void init(){ head=tail=0; }
  bool isEmpty(){ return head==tail; }
  bool isFull(){ return head==(tail+1)%SIZE; }
  //int head(){ return list[head]; }
  //int tail(){ return list[tail]; }
  void enqueue(int x)
  {
    if(isFull()){
      cout << "ERROR(Over flow)" << endl;
      exit(1);
    }
    list[tail] = x;
    tail++;
    tail %= SIZE;
  }
  int dequeue()
  {
    if(isEmpty()){
      cout << "ERROR(Under flow)" << endl;
      exit(1);
    }
    int x = list[head];
    head++;
    head%=SIZE;
    return x;
  }
};
struct Process
{
  string n;
  int t;
};
int main()
{
  int n,q,idx,now=0;
  vector<Process> p;
  Queue que;

  //input,initialize
  que.init();
  cin>>n>>q; p.resize(n);
  for(int i=0; i<n; i++){
    cin>>p[i].n>>p[i].t; que.enqueue(i);
  }

  //process
  while(!que.isEmpty()){
    idx=que.dequeue();
    if(p[idx].t-q>0){
      p[idx].t-=q; now+=q;
      que.enqueue(idx);
    }else{
      now+=p[idx].t;
      p[idx].t=now;
      cout<<p[idx].n<<" "<<p[idx].t<<endl;
    }
  }
  return 0;
}
