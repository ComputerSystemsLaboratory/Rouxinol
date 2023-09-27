#include<iostream>
#include<string>

int main(){
  std::string s,t;
  std::cin >> s;
  while( ! s.empty() ) {
    t += s[ s.size() - 1 ];
    s.erase( s.size() - 1 );
  }
  std::cout << t << std::endl;
  return 0;
}