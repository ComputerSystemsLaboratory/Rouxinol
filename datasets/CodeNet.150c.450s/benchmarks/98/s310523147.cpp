#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int taro[101];
int hanako[101];

int main(){ _;
  int n,m;
  while(cin>>n>>m,!(n==0&&m==0)){
    int taroSum=0,hanakoSum=0;
    REP(i,n){cin>>taro[i];taroSum+=taro[i];}
    REP(i,m){cin>>hanako[i];hanakoSum+=hanako[i];}
    int diff=taroSum-hanakoSum;
    if((diff > 0 ? diff : -diff)%2!=0){cout<<"-1"<<endl;continue;}
    diff/=2;
    REP(i,n){
      REP(j,m){
	if(taro[i]-hanako[j]==diff){
	  cout<<taro[i]<<" "<<hanako[j]<<endl;
	  goto res;
	}
      }
    }
    cout<<"-1"<<endl;
  res:;
  }
}