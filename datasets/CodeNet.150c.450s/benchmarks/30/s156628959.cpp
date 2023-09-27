#include <iostream>
#include <vector>

int main(){
  int n;
  std::cin>>n;
  std::vector<unsigned int> vec(n);
  
  for(auto &v:vec) std::cin>>v;

  int cnt=0;
  for(int i=0;i<n;++i){
    int minj = i;
    for(int j=i;j<n;++j)
      if(vec[j]<vec[minj]) minj = j;
    if(i!=minj){
      cnt++;
      std::swap(vec[i],vec[minj]);
    }
  }
  std::cout<<vec[0];
  for(int i=1;i<n;++i)
    std::cout<<" "<<vec[i];
  std::cout<<"\n"<<cnt<<std::endl;
  return 0;
}