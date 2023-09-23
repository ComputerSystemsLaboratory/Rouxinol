#include<bits/stdc++.h>
#include<sstream>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

void call(int n){
  for(int i=1;i<=n;i++){
    stringstream ss;
    ss<<i;
    char c[8];
    ss>>c;
    if(i%3==0||strstr(c,"3"))
      cout<<" "<<i;
  }
  cout<<endl;
}

int main(){ _;
  int n;cin>>n;
  call(n);
}