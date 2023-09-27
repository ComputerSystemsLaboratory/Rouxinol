#include <bits/stdc++.h>
using namespace std;

int memo[1000][15][30];
int n;


int main(){
  int i,j,k,m,count =0;
  cin >> n;
  for(i=1;i<1000;i++){
    for(j=1;j<=10;j++){
      if(i%3==0)for(k=1;k<=20;k++){
	  memo[i][j][k]=count;
	  count++;
	}
      else if(j%2==1)for(k=1;k<=20;k++){
	  memo[i][j][k]=count;
	  count++;
	}
      else for(k=1;k<=19;k++){
	  memo[i][j][k]=count;
	  count++;
	}
    }
  }
  for(i=0;i<n;i++){
    cin >> j >> k >> m;
    cout << 196470-memo[j][k][m] << endl;
  }
  return 0;
}

