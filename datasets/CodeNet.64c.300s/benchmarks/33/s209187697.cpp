#include <iostream>
#include <string>

int main(){
  int a, b, ans[1000];
  int count=0;
  char op;

  for(int i=0; i<1000; i++){
    std::cin >> a >> op >> b;
    if( op == '+' ){
      ans[i] = a+b;
    }else if( op == '-' ){
      ans[i] = a-b;
    }else if( op == '*' ){
      ans[i] = a*b;
    }else if( op == '/' ){
      ans[i] = a/b;
    }else{ break; }
    count++;
  }

  for(int i=0; i<count; i++){
    std::cout << ans[i] << std::endl;
  }
  return 0;
}

