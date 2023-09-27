#include <iostream>

void print(std::string str, int a, int b){
  for(int i=a; i<=b; i++){
    std::cout << str[i] << std::flush;
  }
  std::cout << std::endl;
}

std::string reverse(std::string str, int a, int b){
  std::string tmp_str = str.substr(a, b-a+1);
  for(int i=a; i<=b; i++){
    str[i] = tmp_str[b-i];
  }
  return str;
}

std::string replace(std::string str, int a, int b, std::string p){
  for(int i=a; i<=b; i++){
    str[i] = p[i-a];
  }
  return str;
}

int main(){
  std::string str;
  int q;
  std::string op;
  int a, b;
  std::string p;

  std::cin >> str;
  std::cin >> q;

  for(int i=0; i<q; i++){
    std::cin >> op >> a >> b;
    if(op=="replace") std::cin >> p;

    if(op=="print"){
      print(str, a, b);
    }
    else if(op=="reverse"){
      str = reverse(str, a, b);
    }
    else if(op=="replace"){
        str = replace(str, a, b, p);
    }
  }
}

