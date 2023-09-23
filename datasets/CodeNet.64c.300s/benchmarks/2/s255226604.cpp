#include<iostream>
int main(){
  int m,f,r,t;
  while(1){
    std::cin >> m >> f >> r;
    t = m + f;
    if(m == -1 && f == -1 && r == -1) return 0;
    if((m == -1 || f == -1) || t < 30) std::cout << "F\n";
    else if(t >= 80) std::cout << "A\n";
    else if(t >= 65) std::cout << "B\n";
    else if(t >= 50) std::cout << "C\n";
    else std::cout << (t >= 30 && r >= 50 ? "C\n" : "D\n");
  }
}