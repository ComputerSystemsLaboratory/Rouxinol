#include <iostream>
#include <string>
#include <cctype>
#define MAXSIZE 101
#define PI 3.141592653589
using namespace std;
int main(){
  string x;
  int N=0;
  while (std::cin >> x) {
    if(x=="0")break;
    for(int i=0;i<x.size();i++){
      N+=x[i]-'0';
    }
    std::cout << N << '\n';
    N=0;
  }
}