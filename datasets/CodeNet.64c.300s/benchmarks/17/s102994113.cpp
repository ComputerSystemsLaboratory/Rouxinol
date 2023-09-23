#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int x,y,s;
  while(cin>>x>>y>>s,(x|y|s)!=0){
    int maxPrice=0;
    for(int i=1;i<=s/2;i++){
      int i_=i*(100+x)/100;
      for(int j=s;j>0;j--){
	int j_=j*(100+x)/100;
	if(i_+j_==s){
	  maxPrice=max(maxPrice,i*(100+y)/100+j*(100+y)/100);
	  break;
	}
      }
    }
    cout<<maxPrice<<endl;
  }
}