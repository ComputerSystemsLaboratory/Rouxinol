#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>

int main(){
  int n;
  std::cin>>n;
  int B[1500]={0};
  for(int k=0;k<n;k++){
    std::string str1;
    std::string str2;
    std::cin>>str1;
    std::cin>>str2;
    int A[1000][1000]={0};
    /*初期化？*/
    for(int i=0;i<str1.size();i++){
      if(str1[i]==str2[0]){
	A[i][0]=1;
      }
      if(i>0){
	A[i][0]=std::max(A[i][0],A[i-1][0]);
      }
    }
    for(int j=0;j<str2.size();j++){
      if(str1[0]==str2[j]){
	A[0][j]=1;
      }
      if(j>0){
	A[0][j]=std::max(A[0][j],A[0][j-1]);
      }
    }
    for(int i=1;i<str1.size();i++){
      for(int j=1;j<str2.size();j++){
	if(str1[i]==str2[j]){
	  A[i][j]=A[i-1][j-1]+1;
	}else{
	  A[i][j]=std::max(A[i-1][j],A[i][j-1]);
	}
      }
    }
    B[k]=A[str1.size()-1][str2.size()-1];
  }
  for(int i=0;i<n;i++){
    std::cout<<B[i]<<"\n";
  }
  return 0;
}

