#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
 
int main(){
  int x, y;
  string op;
    while(1) {
      cin >> x >> op >> y;
      if (op == "?") {
        break;
      } else if (op == "+") {
        printf("%d\n", x + y);
      } else if (op == "-") {
        printf("%d\n", x - y);
      } else if (op == "*") {
        printf("%d\n", x * y);
      } else if (op == "/") {
        printf("%d\n", x / y);
      }
    }
}