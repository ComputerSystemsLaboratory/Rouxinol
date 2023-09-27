#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a < b && b < c){
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}
