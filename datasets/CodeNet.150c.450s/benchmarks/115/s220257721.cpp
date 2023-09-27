#include <iostream>
#include <string>
 
int main() {
  std::string str1,str2;
  int n;
  int A[1001][1001];
  std::cin>>n;
  for(int i=0;i<n;i++){
    std::cin>>str1;
    std::cin>>str2;
    for(int j=0;j<1001;j++){
      for(int k=0;k<1001;k++){
	A[j][k]=0;
      }
    }
    for(int j=1;j<=str1.size();j++){
      for(int k=1;k<=str2.size();k++){
	if(str1[j-1]==str2[k-1]){
	  A[j][k]=A[j-1][k-1]+1;
	}else{
	  if(A[j-1][k]>A[j][k-1]){
	    A[j][k]=A[j-1][k];
	  }else{
	    A[j][k]=A[j][k-1];
	  }
	}
      }
    }
    std::cout<<A[str1.size()][str2.size()]<<"\n";
  }
  return 0;
 
}
