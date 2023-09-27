#include <iostream>
#include <vector>

int main(){
  int n,w;
  std::cin>>n>>w;
  std::vector<int> values(n+1),weights(n+1);
  for(int i=1;i<n+1;i++) {
    std::cin>>values[i]>>weights[i];
  }

  std::vector<std::vector<int>> table(n+1,std::vector<int>(w+1));
  for(int i=1;i<n+1;i++){
    for(int j=1;j<w+1;j++){
      if(weights[i]<=j){
        table[i][j] = std::max(values[i]+table[i-1][j-weights[i]],table[i-1][j]);
      }else{
        table[i][j] = table[i-1][j];
      }
    }
  }
  std::cout<<table[n][w]<<std::endl;
  return 0;
}