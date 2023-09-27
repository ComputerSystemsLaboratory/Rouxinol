#include<iostream>
int main() {
  int a[4],b[4];
  std::cin>>a[0]>>a[1]>>a[2]>>a[3];
  std::cin>>b[0]>>b[1]>>b[2]>>b[3];
  int i,j;
  if((i=a[0]+a[1]+a[2]+a[3]) >= (j=b[0]+b[1]+b[2]+b[3])) {
    std::cout<<i<<std::endl;
  }else{
    std::cout<<j<<std::endl;
  }
}