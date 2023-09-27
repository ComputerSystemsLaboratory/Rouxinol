#include<iostream>

int main(){
  int n;
  std::cin >> n;

  int taro_points = 0, hanako_points = 0;
  for(int i = 0; i < n; i++){
    std::string taro;
    std::string hanako;
    std::cin >> taro;
    std::cin >> hanako;
    
    if(taro > hanako){
      taro_points += 3;
    }else if(taro < hanako){
      hanako_points += 3;
    }else{
      taro_points += 1;
      hanako_points += 1;
    }
  }

  std::cout << taro_points << " " << hanako_points << std::endl;

  return 0;
}

