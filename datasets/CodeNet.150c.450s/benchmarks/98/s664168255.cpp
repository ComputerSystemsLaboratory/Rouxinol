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
  int n,m;
  while(cin>>n>>m,n+m){
    vector<int>tr(n);
    vector<int>ha(m);
    int tsum=0,hsum=0;
    for(int i=0;i<n;i++){
      cin>>tr[i];
      tsum+=tr[i];
    }
    for(int i=0;i<m;i++){
      cin>>ha[i];
      hsum+=ha[i];
    }
    bool flag=false;
    int ct=1e9,ht=1e9;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if((hsum-ha[j]+tr[i])==(tsum-tr[i]+ha[j])&&(ct+ht)>(ha[j]+tr[i])){
	  flag=true;
	  ct=tr[i];ht=ha[j];
	}
      }
    }
    if(flag)
      cout<<ct<<" "<<ht<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}

