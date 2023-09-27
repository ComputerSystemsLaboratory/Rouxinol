#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  string X,Y;
  int l=0;
 int point;


  cin>>X>>Y;
 int N[X.size()+1][Y.size()+1];

 
  for(int i=0;i<=Y.size();i++){
  
      N[0][i]=i;

  }
 
 for(int i=1;i<=X.size();i++){
  
      N[i][0]=i;

  }
 
 

  for(int i=1;i<=X.size();i++){
    for(int j=1;j<=Y.size();j++){
      if(X[i-1]==Y[j-1]){
	point=0;
	
      }else{
	point=1;
      }
      N[i][j]=min(min(N[i-1][j]+1,N[i][j-1]+1),N[i-1][j-1]+point);
   

   
  }
  }
  cout<<N[X.size()][Y.size()]<<endl;
 return 0;
}

