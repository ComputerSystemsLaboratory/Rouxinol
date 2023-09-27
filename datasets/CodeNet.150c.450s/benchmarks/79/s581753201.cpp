#include <iostream>
#include <vector>

int main(){
  while(1){
    int n,r;
    std::cin>>n>>r;
    if(n==0&&r==0) break;
    std::vector<int> hanafuda(n),tmp(n);
    for(int i=0;i<n;++i) hanafuda[i]=n-i;

    for(int i=0;i<r;++i){
      for(int j=0;j<n;++j)
        tmp[j]=hanafuda[j];
      int p,c;
      std::cin>>p>>c;
      for(int j=0;j<c;++j) hanafuda[j] = tmp[p-1+j];
      for(int j=0;j<p-1;++j) hanafuda[c+j] = tmp[j];
    }
    std::cout<<hanafuda[0]<<std::endl;
  }
  return 0;
}