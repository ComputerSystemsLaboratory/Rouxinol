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
  int n,m,p;
  while(cin>>n>>m>>p,n+m+p){
    vector<int>pl(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>pl[i];
      sum+=pl[i];
    }
    sum*=(100-p);
    int ans=0;
    if(pl[m-1]==0){
      ans=0;
    }else{
      ans=sum/pl[m-1];
    }
    cout<<ans<<endl;
  }
  return 0;
}

