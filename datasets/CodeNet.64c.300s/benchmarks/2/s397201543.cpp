#include <iostream>
#include<stdio.h>
#define MAXSIZE 100
#define PI 3.141592653589
using namespace std;
int main(){

  while (1) {
    int m,f,r;
    std::cin >> m>>f>>r;
    if(-1==m&&-1==f&&-1==r){
      break;
    }else if(-1==m||-1==f){
      std::cout << "F" << '\n';
    }else if(80<=m+f){
      std::cout << "A" << '\n';
    }else if(65<=m+f){
      std::cout << "B" << '\n';
    }else if(50<=m+f){
      std::cout << "C" << '\n';
    }else if(30<=m+f&&50>r){
      std::cout << "D" << '\n';
    }else if(30<=m+f){
      std::cout << "C" << '\n';
    }else {
      std::cout << "F" << '\n';
    }
  }
}