#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int ans=INF;
    for(int i=0;i*i*i<=n;i++){
      for(int j=0;j*j<=n-(i*i*i);j++){
	ans=min(ans,i+j+(n-(i*i*i)-(j*j)));
      }
    }
      cout<<ans<<endl;
  }
  return 0;
}
