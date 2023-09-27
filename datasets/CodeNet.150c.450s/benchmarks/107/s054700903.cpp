#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>

int main(){
  std::string str1;
  std::string str2;
  std::cin>>str1;
  std::cin>>str2;
  int A[1001][1001]={0};
  for(int i=0;i<=str1.size();i++){
    A[i][0]=i;
  }
  for(int j=0;j<=str2.size();j++){
    A[0][j]=j;
  }
  for(int i=1;i<=str1.size();i++){
    for(int j=1;j<=str2.size();j++){
      if(str1[i-1]==str2[j-1]){
	A[i][j]=A[i-1][j-1];
      }else{
	A[i][j]=std::min(std::min(A[i-1][j]+1,A[i][j-1]+1),A[i-1][j-1]+1);
      }  
    }
  }
  std::cout<<A[str1.size()][str2.size()]<<"\n";
  return 0;
}

