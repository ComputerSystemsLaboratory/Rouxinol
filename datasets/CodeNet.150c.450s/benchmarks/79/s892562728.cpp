#include <bits/stdc++.h>

int n = 0;

void display(int *arr){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main(){

  /*std::vector<int> tmp;
  for(int i = 0; i < 10; i++){
    tmp.push_back(i);
    std::cout << tmp[i] << " ";
  }
  std::cout << std::endl;

  tmp.erase(tmp.end() - 6, tmp.end() - 3);
  for(int i = 0; i < tmp.size(); i++){
    std::cout << tmp[i] << " ";
  }

  std::cout << std::endl;*/
  
  while(1){
    int r;
    std::cin >> n >> r;    
    if(n + r == 0) break;
    std::vector<int> yama;
    for(int i = 0; i < n; i++){
      yama.push_back(i);
      //std::cout << yama[i] << " ";
    }
    //std::cout << std::endl;

    for(int i = 0; i < r; i++){
      int p, c;
      std::cin >> p >> c;
      std::vector<int> tmp;
      //std::cout << n << " " << r << " " << p << " " << c << std::endl;
      for(int j = 0; j < c; j++){
        tmp.push_back(yama[n - p - c + 1 + j]);
        //std::cout << tmp[j] << std::endl;
      }
      yama.erase(yama.end() - (p - 1 + c), yama.end() - (p - 1));
      //display(yama.data());
      for(int j = 0; j < tmp.size(); j++){
        yama.push_back(tmp[j]);
      }
    }
    std::cout << yama[yama.size() - 1] + 1 << std::endl;
    
  }

  return 0;
  
}