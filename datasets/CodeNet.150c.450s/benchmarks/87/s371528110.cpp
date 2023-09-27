#include<bits/stdc++.h>
using namespace std;

void p(int ma[][5],int h){
  cout<<endl;
  for(int i=0;i<h;i++){
    for(int j=0;j<5;j++){
      if(j)cout<<" ";
      cout<<ma[i][j];
    }
    cout<<endl;
  }
}

int main(){
  int h;
  int ma[10][5];
  while(cin>>h,h){
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++)
	cin>>ma[i][j];
    }
    int ans=0;
    int flag=1;
    while(flag){
      flag=0;
      for(int x=0;x<h;x++){
	for(int i=0;i<3;i++){
	  if(ma[x][i]==0)continue;
	  int k=1;
	  for(int j=i+1;j<5;j++){
	    if(ma[x][j]==ma[x][j-1])k++;
	    else break;
	  }
	  if(k>=3){
	    flag=1;
	    for(int j=0;j<k;j++){
	      ans+=ma[x][i+j];
	      ma[x][i+j]=0;
	    }
	    break;
	  }
	}
      }
      // p(ma,h);
      for(int i=0;i<5;i++){
	for(int j=h-1;j>=0;j--){
	  if(ma[j][i]==0){
	    //cout<<"a"<<endl;
	    for(int k=j;k>=0;k--){
	      if(ma[k][i]!=0){
		swap(ma[j][i],ma[k][i]);
		break;
	      }
	    }
	  }
	}
      }
      // p(ma,h);
    }
    cout<<ans<<endl;
  }
  return 0;
}

