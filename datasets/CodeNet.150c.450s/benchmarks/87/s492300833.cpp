#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef vector<int> vi;

int main(){
  int h;
  int g[11][11];

  while(cin >> h, h){
    rep(i,h)rep(j,5)cin >> g[i][j];

    int score = 0;
    bool flag = true;
    while(flag){
      flag = false;
      rep(i,h){
	int len = 0, prv = -1, col = -1;
	rep(j,5){
	  if(col==g[i][j] && g[i][j]!=-1){
	    len++;
	  }else{
	    if(len>=3){
	      flag = true;
	      for(int k=prv;k<prv+len;k++){
		score += g[i][k];
		g[i][k] = -1;
	      }
	    }
	    len=1;
	    prv = j;
	    col = g[i][j];
	  }
	}
	if(len>=3){
	  flag = true;
	  for(int k=prv;k<prv+len;k++){
	    score += g[i][k];
	    g[i][k] = -1;
	  }
	}
      }
      
      rep(j,5){
	for(int i=h-1;i>=1;i--){
	  for(int tmp=0;tmp<10 && (g[i][j]==-1);tmp++){
	    for(int k=i;k>=1;k--)swap(g[k][j],g[k-1][j]);
	  }
	}
      }
    }
    cout << score << endl;
  }
}