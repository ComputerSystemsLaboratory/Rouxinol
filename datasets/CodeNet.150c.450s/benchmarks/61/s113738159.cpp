#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n+a+b+c+x){
    vector<int>Y;
    int ans=0;
    int flag=1;
    for(int i=0;i<n;i++){
      int s;cin>>s;
      while(x!=s&&flag==1){
	x=(a*x+b)%c;
	ans++;
	if(ans>10000){
	  ans=-1;
	  flag=0;
	  break;
	}
      }
      if(i!=n-1&&flag==1){
	x=(a*x+b)%c;
	ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}