#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  string X,Y;
  int n;
  cin>>n;
  int ans[n];
  int l=0;
 int point;

  for(int i=0;i<n;i++){
    ans[i]=0;
  }

  for(int m=0;m<n;m++){
  cin>>X>>Y;
 int N[X.size()+1][Y.size()+1];

  for(int i=0;i<=X.size();i++){
    for(int j=0;j<=Y.size();j++){

      N[i][j]=0;
}
  }

 
 

  for(int i=1;i<=X.size();i++){
    for(int j=1;j<=Y.size();j++){
      if(X[i-1]==Y[j-1]){
	point=1;
	
      }else{
	point=0;
      }
       N[i][j]=max({N[i-1][j],N[i][j-1],N[i-1][j-1]+point});
       point=0;
}
   
  }
  // ans[l]=N[X.size()][Y.size()];

  cout<<N[X.size()][Y.size()]<<endl;
  // l++;

  }
  //  cout<<ans[0]<<endl;
  // cout<<ans[1]<<endl;
  //cout<<ans[2]<<endl;

 return 0;
}

