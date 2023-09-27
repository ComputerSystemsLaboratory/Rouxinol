#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){

  std::vector<unsigned int> heights;

  char buf[100];
  for (int i=0; i<10 ; i++){
    std::cin >> buf;
    heights.push_back(atoi(buf));
  }

  std::sort(heights.begin(),heights.end(),std::greater<int>());

  for (int i=0; i<3;i++){
    std::cout << heights[i] << std::endl;
  }

  return 0;
}