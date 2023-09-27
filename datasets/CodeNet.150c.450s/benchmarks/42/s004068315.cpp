#include<iostream>
using namespace std;
 
struct pro{
  string str;
  int time;
};
 
  pro que[100000];
int head,tail,leng=100000;
 
int isEmpty(){
  return head==tail;
}
 
void enqueue(pro x){
  que[tail]=x;
  if(tail+1==leng) tail=0;
  else tail++;
}
 
pro dequeue(){
  pro x;
  x=que[head];
  if(head+1==leng) head=0;
  else head++;
  return x;
}
 
int main(){
  pro x;
  int n,q,cnt=0;
  cin>>n>>q;
  pro scn;
  for(int i=0;i<n;i++){
 cin>>scn.str>>scn.time;
 enqueue(scn);
  }
  while(!isEmpty()){
    x=dequeue();
    if(x.time>q)cnt+=q,x.time-=q,enqueue(x);
       else{
 cnt+=x.time;
 cout<<x.str<<" "<<cnt<<endl;
    }
  }
  return 0;
}
