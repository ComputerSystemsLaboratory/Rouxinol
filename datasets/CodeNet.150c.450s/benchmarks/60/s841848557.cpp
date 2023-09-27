#include<iostream>
int main(){
  int n,d,num;
  std::cin>>n;
  int flag,B[100][100]={0};
  for(int i=0;i<n;i++){
    std::cin>>num>>d;
    for(int j=0;j<d;j++){
      std::cin>>flag;
      B[num-1][flag-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j!=n-1){
	std::cout<<B[i][j]<<" ";
      }else{
	std::cout<<B[i][j]<<"\n";
      }
    }
  }
}
	
