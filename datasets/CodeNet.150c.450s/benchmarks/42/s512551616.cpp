#include<algorithm>
#include<iostream>
#define N 100100
using namespace std;
typedef pair<string,int> P;
P queue[N];
int n,q,b,h,t,cnt;
string a;

void push(P x){
  if(t+1==N)queue[t]=x,t=0;
  else queue[t++]=x;
}

void pop(){h+1==N?h=0:h++;}

bool empty(){return h==t;}

P front(){
  return queue[h];
}

int main(){
  cnt=h=0,t=0;
  cin>>n>>q;
  for(int i=0;i<n;i++)cin>>a>>b,push(P(a,b));
  while(!empty()){
    P t=front(); pop();
    int tim=min(q,t.second);
    t.second-=tim;
    cnt+=tim;
    if(!t.second)cout<<t.first<<' '<<cnt<<endl;
    else push(t);
  }
  return 0;
}