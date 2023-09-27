#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n, x, y, m, l;
  char d;

  while(cin>>n, n){
    bool p[21][21]={};
    for(int i=0;i<n;i++){
      cin>>x>>y;
      p[y][x]=true;
    }
    cin>>m;
    int nx=10, ny=10;
    for(int i=0;i<m;i++){
      cin>>d>>l;
      if(d=='N'){
	for(int j=0;j<l;j++){
	  ny++;
	  if(p[ny][nx]==true){
	    n--;
	    p[ny][nx]=false;
	  }
	}
      }else if(d=='E'){
	for(int j=0;j<l;j++){
	  nx++;
	  if(p[ny][nx]==true){
	    n--;
	    p[ny][nx]=false;
	  }
	}
      }else if(d=='S'){
	for(int j=0;j<l;j++){
	  ny--;
	  if(p[ny][nx]==true){
	    n--;
	    p[ny][nx]=false;
	  }
	}
      }else if(d=='W'){
	for(int j=0;j<l;j++){
	  nx--;
	  if(p[ny][nx]==true){
	    n--;
	    p[ny][nx]=false;
	  }
	}
      }
    }
    if(n) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
  
  return 0;
}