#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int e;
  while(cin>>e,e!=0){
    int m=1<<29;
    REP(i,101){
      if(i*i*i>e) break;
      REP(j,1001){
	if(i*i*i+j*j>e)break;
	m=min(m,i+j+(e-i*i*i-j*j));
      }
    }
    cout<<m<<endl;
  }
}