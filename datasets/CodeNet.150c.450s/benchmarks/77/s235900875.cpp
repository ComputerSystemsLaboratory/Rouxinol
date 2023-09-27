#include<iostream>
#include<string>
using namespace std;

int map[21][21];
int main() {
  int n,m,x,y;
  string s;
  while(cin>>n, n) {
    for(int i=0; i<=20; ++i)
      for(int j=0; j<=20; ++j)
	map[i][j] = 0;

    for(int i=0; i<n; ++i) {
      cin>>x>>y;
      map[x][y] = 1;
    }

    cin>>m;
    int nx=10,ny=10,count = 0;
    for(int i=0; i<m; ++i) {
      cin>>s>>x;
      if(s == "N") {
	for(int j=0; j<x; ++j) {
	  ny++;
	  if(map[nx][ny]) {
	    count++;
	    map[nx][ny] = 0;
	  }
	}
      }else if(s == "E") {
	for(int j=0; j<x; ++j) {
	  nx++;
	  if(map[nx][ny]) {
	    count++;
	    map[nx][ny] = 0;
	  }
	}
      }else if(s == "W") {
	for(int j=0; j<x; ++j) {
	  nx--;
	  if(map[nx][ny]) {
	    count++;
	    map[nx][ny] = 0;
	  }
	}
      }else if(s == "S") {
	for(int j=0; j<x; ++j) {
	  ny--;
	  if(map[nx][ny]) {
	    count++;
	    map[nx][ny] = 0;
	  }
	}
      }
    }

    if(count == n) {
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }
}