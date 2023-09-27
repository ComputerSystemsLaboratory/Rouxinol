#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

#define PB push_back
#define MP make_pair

void Input(int*,int*,queue<pair<string,int> >&);
void Calc(int*,int*,queue<pair<string,int> >&);

int main(int argc,char* argv[]){
  queue<pair<string,int> > qpair;
  int n,q;

  Input(&n,&q,qpair);
  Calc(&n,&q,qpair);

  return 0;
}

void Input(int *pn,int *pq,queue<pair<string,int> >&qpair){
  pair<string,int> tmp;

  cin>>*pn>>*pq;

  for(int i=0;i<*pn;i++){
    cin>>tmp.first>>tmp.second;
    qpair.push(tmp);
  }
}

void Calc(int *pn,int *pq,queue<pair<string,int> > &qpair){
  pair<string,int> tmp;
  double time=0;

  while(!qpair.empty()){
    tmp=qpair.front();qpair.pop();

    if(tmp.second<=*pq){
      time+=tmp.second;
      cout<<tmp.first<<" "<<static_cast<int>(time)<<endl;
    }
    else{
      time+=*pq;
      tmp.second-=*pq;
      qpair.push(tmp);
    }
  }
}