#include <cstdio>
#include <algorithm>

int main() {
  
  int a[28] = {};
  
  for(int i=0;i<28;i++) {
    scanf("%d", &a[i]);
  }
  
  std::sort(a, a+28);
  
  int c=1;
  for(int i=1;i<31;i++) {
    if(a[i-c]!=i) {
      printf("%d\n", i);
      c++;
    }
  }
  
  return 0;
}