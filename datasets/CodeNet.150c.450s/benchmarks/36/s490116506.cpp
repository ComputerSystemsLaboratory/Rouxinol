#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map> // pair
#include <set>
#define MAXSIZE 200000
#define PI 3.141592653589
using namespace std;

template<typename T>
T add(T a,T b){
  return a+b;
}

namespace A
{
  int f(void){
    return 1;
  }
}

int main(){
  int d;

  while (std::cin >> d) {
    int sum=0;
    for(int i=1;i<600/d;i++){
      sum+=d*i*d*i*d;
    }

    std::cout << sum << '\n';
  }

}

