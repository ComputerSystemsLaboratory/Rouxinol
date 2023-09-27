// Lec09-C Card Game
#include<iostream>
#include<string>
int main(){
  std::string p1, p2;
  int n, scr1=0, scr2=0;
  for(std::cin >> n; n; n--){
    std::cin >> p1 >> p2;
    if(p1 == p2){
      scr1++, scr2++;
      continue;
    }
    p1.compare(0,p1.length(),p2,0,p2.length())>0 ? scr1+=3 : scr2+=3;
  }
  std::cout << scr1 << " " << scr2 << std::endl;
  return 0;
}