#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map> // pair
#include <set>
#include <string>

#define MAXSIZE 200000
#define PI 3.141592653589
using namespace std;




int main(){
  string s;
  std::cin >> s;


  for(int i=s.size()-1;i>=0;i--){
    std::cout << s[i];
  }

  std::cout  << '\n';
}

