#include <bits/stdc++.h>
using namespace std;;

int n,p=0,side[101][101],startTime[101],endTime[101],v[101];

void dfs(int x){
  if(!v[x]) {
    v[x]++; startTime[x]=++p;
	for (int i =1; i<n+1; i++) {
      if(side[x][i]) {
        dfs(i);
      }
    }
	endTime[x]=++p;
  }
}

int main(){
	int a,b,c;
	cin>>n;
	for (int i =0; i<n; i++) {
      cin>> a >> b;
      for (int i =0; i<b; i++) {
        cin >> c;
        side[a][c]++;
      }
    }
  
  for (int i =1; i<n+1; i++) {
    if(!v[i]) dfs(i);
  }
  for (int i =1; i<n+1; i++) {
    cout << i << ' ' << startTime[i] << ' ' << endTime[i] << endl;    
  }
}
