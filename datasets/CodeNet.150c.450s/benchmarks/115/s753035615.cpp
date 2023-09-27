#include<bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin>>q;
  string a,b;
  int x[1001][1001];
  x[0][0]=0;
  for(int i=1;i<=1000;i++){
    x[0][i]=0;
    x[i][0]=0;
  }
  for(int i=0;i<q;i++){
    cin>>a>>b;
    for(int j=1;j<=b.size();j++){
      for(int l=1;l<=a.size();l++){
	if(a[l-1]==b[j-1]){
	  if(x[j-1][l-1]+1>x[j][l-1]){
	    x[j][l]=x[j-1][l-1]+1;
	  }else{
	    x[j][l]=x[j][l-1];
	  }
	}else{
	  if(x[j-1][l]>x[j][l-1]){
	    x[j][l]=x[j-1][l];
	  }else{
	    x[j][l]=x[j][l-1];
	  }
	}
      }
    }
    cout<<x[b.size()][a.size()]<<endl;
  }
  return(0);
}

