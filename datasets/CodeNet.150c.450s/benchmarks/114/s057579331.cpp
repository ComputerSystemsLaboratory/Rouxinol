#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

int N;
const int MAX_E=100;
int label[MAX_E];
priority_queue<int,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;

int main(){
  cin>>N;
  REP(i,N)
    label[i]=i;
  REP(i,N){
    REP(j,N){
      int a;cin>>a;
      if(a>=0&&i>j){
	pq.push(make_pair(a,make_pair(i,j)));
      }
    }
  }
  int size=0;
  while(!pq.empty()){
    int cost=pq.top().first;
    pair<int,int> e=pq.top().second;
    //printf("%d,%d,%d\n",cost,e.first,e.second);
    pq.pop();
    if(label[e.first]!=label[e.second]){
      int tmp=label[e.second];
      size+=cost;
      REP(i,N){
	if(label[i]==tmp)
	  label[i]=label[e.first];
	//printf("%d ",label[i]);
      }
      //printf("\n");
    }
  }
  printf("%d\n",size);
}