#include <cstdio>

int main() {
  
  bool a[31] = {};
  
  for(int i=0;i<28;i++) {
    int n;
    scanf("%d", &n);
    a[n] = true;
  }
  
  for(int i=1;i<31;i++) {
    if(!a[i])printf("%d\n", i);
  }
  
  return 0;
}