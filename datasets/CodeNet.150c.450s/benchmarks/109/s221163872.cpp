#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_N=10000;

pair<int,int> p[MAX_N+1];

int main(){ _;
  int n,a=0,b=0,c=0,d=0,e=0,f=0;
  while(scanf("%d",&n),n!=0){
    REP(i,n){
      scanf("%02d:%02d:%02d %02d:%02d:%02d",&a,&b,&c,&d,&e,&f);
      p[i]=make_pair(a*3600+b*60+c,d*3600+e*60+f);
    }
    priority_queue<int,vector<int>,greater<int> > que;
    int maxTrain=0;
    sort(p,p+n);
    REP(i,n){
      while(!que.empty()&&que.top()<=p[i].first)
	que.pop();
      que.push(p[i].second);
      maxTrain=max(maxTrain,(int)que.size());
    }
    cout<<maxTrain<<endl;
  }
}