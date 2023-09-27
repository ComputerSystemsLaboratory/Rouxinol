#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_V = 1<<20;

struct node{
  int first;// [0],1,2,3
  int mid;  // 0,1,[2],3
  int last; // 0,1,2,[3]
  int sum;
};

node nodes[MAX_V*2];
int offset;

void add(int i, int x){
  nodes[offset+i].sum+=x;
  if(offset+i==0) return;
  int p=(offset+i-1)/2;
  while(true){
    nodes[p].sum = nodes[p*2+1].sum + nodes[p*2+2].sum;
    if(p==0)break;
    p=(p-1)/2;
  }
}
int getSum(int s, int t, int i){
  if(nodes[i].first==s&&nodes[i].last==t)
    return nodes[i].sum;
  if(t<nodes[i].mid)
    return getSum(s,t,i*2+1);
  if(s>=nodes[i].mid)
    return getSum(s,t,i*2+2);
  return getSum(s,nodes[i].mid-1,i*2+1) + getSum(nodes[i].mid,t,i*2+2);
}

int main(){ _;
  int n,q; cin>>n>>q;
  int a=1;
  if(n>1)
    for(;a<n;a*=2){}
  offset=a-1;
  for(int i=0;i<a;i++){
    nodes[offset+i].first=nodes[offset+i].mid=nodes[offset+i].last=i;
    nodes[offset+i].sum=0;
  }
  for(int i=offset-1;i>=0;i--){
    nodes[i].first=nodes[2*i+1].first;
    nodes[i].mid=nodes[2*i+2].first;
    nodes[i].last=nodes[2*i+2].last;
    nodes[i].sum=0;
  }
  REP(i,q){
    int com,x,y;
    cin>>com>>x>>y;
    if(com==0){
      add(x-1,y);
    }else{
      cout<<getSum(x-1,y-1,0)<<endl;
    }
  }
}