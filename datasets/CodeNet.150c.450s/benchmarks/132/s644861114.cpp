#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int ary[60];

int main(){ _;
  int n,p;
  while(cin>>n>>p,!(n==0&&p==0)){
    REP(i,n)ary[i]=0;
    int rest=p;

    for(;;){
      REP(i,n){
	if(rest==0){
	  if(ary[i]==p){
	    cout<<i<<endl;
	    goto found;
	  }else swap(ary[i],rest);
	}else{
	  rest--;
	  ary[i]++;
	}
      }
    }
  found:;
  }
}