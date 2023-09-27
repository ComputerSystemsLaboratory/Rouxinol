#include<iostream>

int main(){
  std::string str;
  std::cin >> str;
  int n;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::string op;
    std::cin >> op;

    int a, b;
    std::cin >> a;
    std::cin >> b;
    if(op == "print"){
      std::cout << str.substr(a, b - a + 1) << std::endl;
    }else if(op == "reverse"){
      for(int head = a, tail = b; head < tail; head++, tail--){
	char t = str[head];
	str[head] = str[tail];
	str[tail] = t;
      }
    }else if(op == "replace"){
      std::string p;
      std::cin >> p;
      for(int i = 0; i < b - a + 1; i++){
	str[a + i] = p[i];
      }
    }
  }

  return 0;
}

