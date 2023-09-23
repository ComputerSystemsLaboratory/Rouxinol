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
int vecx[4]={0,1,0,-1};
int vecy[4]={1,0,-1,0};
int Map[101][101]={};
string MAP[101];
  int h,w;
    int cnt=1;
void dfs(int he,int wi){
  for(int i=0;i<4;i++){
    if(he+vecx[i]>=0&&he+vecx[i]<h&&wi+vecy[i]>=0&&wi+vecy[i]<w&&MAP[he][wi]==MAP[he+vecx[i]][wi+vecy[i]]&&Map[he+vecx[i]][wi+vecy[i]]==0){
      Map[he+vecx[i]][wi+vecy[i]]=cnt;
      dfs(he+vecx[i],wi+vecy[i]);
    }
  }
}
int main(){
  while(cin>>h>>w,h+w){
    cnt=1;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	Map[i][j]=0;
    for(int i=0;i<h;i++)
      cin>>MAP[i];
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(Map[i][j]==0){
	  //cout<<"!"<<endl;
	  Map[i][j]=cnt;
	  dfs(i,j);
	  cnt++;
	}
      }
    }
    cout<<cnt-1<<endl;
  }
  return 0;
}