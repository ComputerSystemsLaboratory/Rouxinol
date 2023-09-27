#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

typedef pair<int,int> p;

vector<p> dic;

int main(){ _;
  int N;
  int t,b,l,r,n,d;
  while(cin>>N,N!=0){
    t=b=l=r=0;
    dic=vector<p>(N);
    dic[0]=make_pair(0,0);
    for(int i=1;i<N;i++){
      cin>>n>>d;
      dic[i]=make_pair(d==0?dic[n].first-1:d==2?dic[n].first+1:dic[n].first,
		       d==1?dic[n].second+1:d==3?dic[n].second-1:dic[n].second);
      r=max(r,dic[i].first);
      l=min(l,dic[i].first);
      b=max(b,dic[i].second);
      t=min(t,dic[i].second);
    }
    cout<<(r-l+1)<<" "<<(b-t+1)<<endl;
  }
}