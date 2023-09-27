#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(cin>>n,n){
    int x,y;
    int stone[21][21]={0};
    for(int i=0;i<n;++i){
      cin>>x>>y;
      stone[x][y]=1;
    }
    
    int m;

    cin>>m;

    char dir;
    int dis;
    int x_n=10;
    int y_n=10;
    int cnt=0;

    for(int i=0;i<m;++i){
      cin>>dir>>dis;

      if(dir=='N'){
	for(int j=0;j<dis;++j){
	  y_n++;
	  if(stone[x_n][y_n]==1){
	    cnt++;
	    stone[x_n][y_n]=0;
	  }
	}
      }

      else if(dir=='E'){
	for(int j=0;j<dis;++j){
	  x_n++;
	  if(stone[x_n][y_n]==1){
	    cnt++;
	    stone[x_n][y_n]=0;
	  }
	}
      }

      else if(dir=='S'){
	for(int j=0;j<dis;++j){
	  y_n--;
	  if(stone[x_n][y_n]==1){
	    cnt++;
	    stone[x_n][y_n]=0;
	  }
	}
      }

      else if(dir=='W'){
	for(int j=0;j<dis;++j){
	  x_n--;
	  if(stone[x_n][y_n]==1){
	    cnt++;
	    stone[x_n][y_n]=0;
	  }
	}
      }
    }
    if(cnt==n)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
}