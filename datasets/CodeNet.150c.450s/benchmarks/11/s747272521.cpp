#include <iostream>
#include <set>

int getValue(char ch){
  if(ch == 'S'){ return 0; }
  if(ch == 'H'){ return 1; }
  if(ch == 'C'){ return 2; }
  if(ch == 'D'){ return 3; }
}

int main(){
  int N,x;
  char ch;
  std::string marks = "SHCD";
  std::set<std::pair<int,int>> cards;
  for(int i = 0 ; i < 4 ; i++){
    for(int j = 0 ; j < 13 ; j++){
      cards.insert(std::make_pair(i,j+1));
    }
  }
  std::cin >> N;
  for(int i = 0 ; i < N ; i++){
    std::cin >> ch >> x;
    cards.erase(std::make_pair(getValue(ch),x));
  }
  for(auto v : cards){
    std::cout << marks[v.first] << " " << v.second << std::endl;
  }
  return 0;
}