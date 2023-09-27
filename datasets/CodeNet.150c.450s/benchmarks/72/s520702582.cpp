#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool is_lower(char &c){
  if('a' <= c && c <= 'z'){
    return true;
  }
  return false;
}

bool is_upper(char &c){
  if('A' <= c && c <= 'Z'){
    return true;
  }
  return false;
}

void to_lower(char &c){
  c += 'a' - 'A';
}

void to_upper(char &c){
  c += 'A' - 'a';
}

int main(){
  string str;
  getline(cin,str);
  for(auto c : str){
    if(is_lower(c)){
      to_upper(c);
    }else if(is_upper(c)){
      to_lower(c);
    }
    printf("%c",c);
  }
  printf("\n");
  return 0;
}