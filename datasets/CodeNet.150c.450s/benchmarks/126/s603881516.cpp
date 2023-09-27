#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int main(){

  while(true){

  int a,b,n,x,y;
  cin >> a >> b;
  if(a==0 && b==0) break;

  int Road[b+1][a+1];
  rep(i,b+1) rep(j,a+1) Road[i][j]=0;
  Road[1][1]=1;

  cin >> n;

  rep(i,n){
	 cin >> x >> y;
	 Road[y][x]=-1;
  }

	 REP(i,1,b){
	 REP(j,1,a){
	 if(Road[i][j]!=-1 && (i!=1 || j!=1)){
	 if(Road[i][j-1]!=-1 && Road[i-1][j]!=-1) Road[i][j]=Road[i][j-1]+Road[i-1][j];
	 if(Road[i][j-1]!=-1 && Road[i-1][j]==-1) Road[i][j]=Road[i][j-1];
	 if(Road[i][j-1]==-1 && Road[i-1][j]!=-1) Road[i][j]=Road[i-1][j];

	 }
	 }
	 }

	 cout << Road[b][a] << endl;
	 
  }

    return 0;

}