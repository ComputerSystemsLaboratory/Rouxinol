#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int h,w;

void solve(){
  int sqDiag=h*h+w*w;
  int next=1<<27;
  int resultH,resultW;
  for(int a=2;a<150;a++){
    for(int b=a-1;b>0;b--){
      int tmp=a*a+b*b;
      if(tmp<sqDiag)break;
      if(sqDiag==tmp&&b<=h)break;
      if(next>=tmp){
	next=tmp;
	resultH=b;
	resultW=a;
      }
    }
  }
  cout<<resultH<<" "<<resultW<<endl;
}

int main(){ _;
  while(cin>>h>>w,(h|w)!=0){
    solve();
  }
}