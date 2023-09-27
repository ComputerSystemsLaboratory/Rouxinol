// Lec09-B Shuffle
#include<iostream>
#include<queue>
int main(){
  std::queue<char> q;
  std::string str;
  int n, h;
  while(std::cin >> str){
    if(str[0] == '-') break;
    for(int i=0; i<str.length(); i++) q.push(str[i]);
    for(std::cin >> n; n; n--) for(std::cin >> h; h; h--) q.push(q.front()), q.pop();
    while(!q.empty()) std::cout << q.front(), q.pop();
    std::cout << std::endl;
  }
  return 0;
}