#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int a0;
int l;

void solve(){
  map<int,int> a;
  int ax=a0;
  REP(i,21){
    a[ax]=i;
    int c[10]={};
    REP(j,l){
      c[ax%10]++;
      ax/=10;
    }
    int large=0,small=0;
    REP(j,10){
      while(c[j]>0){
	large/=10;
	large+=j*pow(10,l-1);
	small*=10;
	small+=j;
	c[j]--;
      }
    }
    ax=large-small;
    if(a.count(ax)==1){
      cout<<a[ax]<<" "<<ax<<" "<<i-a[ax]+1<<endl;
      break;
    }
  }
}

int main(){ _;
  while(cin>>a0>>l,(a0|l)!=0){
    solve();
  }
}