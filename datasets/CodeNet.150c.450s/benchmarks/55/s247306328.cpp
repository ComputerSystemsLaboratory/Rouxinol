#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  string str;
  int sum;
  while(getline(cin,str)){
    sum = 0;
    for(auto c : str){
      sum += c - '0';
    }
    if(sum) printf("%d\n",sum);
  }
  return 0;
}