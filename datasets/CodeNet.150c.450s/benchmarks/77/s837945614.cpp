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
    bool Map[25][25]={};
    for(int i=0;i<n;i++){
      int x,y;cin>>x>>y;
      Map[y][x]=true;
    }
    int m;cin>>m;
    int num=n;
    pair<int,int>now=mp(10,10);
    for(int i=0;i<m;i++){
      char ccc;int a;cin>>ccc>>a;
      switch(ccc){
      case 'N':
	for(int j=0;j<a;j++){
	  now.F++;
	  if(Map[now.F][now.S]){num--;Map[now.F][now.S]=false;}
	}break;
      case 'E':
	for(int j=0;j<a;j++){
	  now.S++;
	  if(Map[now.F][now.S]){num--;Map[now.F][now.S]=false;}
	}break;
      case 'S':
	for(int j=0;j<a;j++){
	  now.F--;
	  if(Map[now.F][now.S]){num--;Map[now.F][now.S]=false;}
	}break;
      case 'W':
	for(int j=0;j<a;j++){
	now.S--;
	if(Map[now.F][now.S]){num--;Map[now.F][now.S]=false;}
	}break;
      }
    }
    if(num)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
  return 0;
}

