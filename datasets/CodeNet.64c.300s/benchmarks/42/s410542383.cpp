#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  int mp[21][21];
  int x,y,n;
  char d;
  int nowx,nowy,ans;
  while(1){
    cin>>N;
    if(N==0) break;
    nowx=10;
    nowy=10;
    ans=0;
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
	mp[i][j]=0;
      }
    }
    for(int i=0;i<N;i++){
      cin>>x>>y;
      mp[x][y]=1;
    }
    /*for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
	cout<<mp[i][j]<<" ";
      }
      cout<<endl;
      }*/
    cin>>M;
    for(int i=0;i<M;i++){
      cin>>d>>n;
      if(d=='W'){
	for(int j=0;j<n;j++){
	  nowy--;
	  if(mp[nowy][nowx]==1){
	    mp[nowy][nowx]=0;
	    ans++;
	  }
	}
      }
	else if(d=='N'){
	  for(int j=0;j<n;j++){
	    nowx++;
	    if(mp[nowy][nowx]==1){
	      mp[nowy][nowx]=0;
	      ans++;
	    }
	  }
	}
	else if(d=='E'){
	  for(int j=0;j<n;j++){
	    nowy++;
	    if(mp[nowy][nowx]==1){
	      mp[nowy][nowx]=0;
	      ans++;
	    }
	  }
	}
	else if(d=='S'){
	  for(int j=0;j<n;j++){
	    nowx--;
	    if(mp[nowy][nowx]==1){
	      mp[nowy][nowx]=0;
	      ans++;
	    }
	  }
	}
    }
    if(ans==N) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}

