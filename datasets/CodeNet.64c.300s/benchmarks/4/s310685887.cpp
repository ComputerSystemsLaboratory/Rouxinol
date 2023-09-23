#include <cstdio>

int main() {
  //入力
  int a,b,c;
  std::scanf("%d %d %d",&a,&b,&c);
 
  if(a < b && b < c) {
    std::printf("Yes");
  }
  
  else if(!(a < b && b < c)) {
    std::printf("No");
  }
  

  
  std::printf("\n");
  
  
  return 0;
}

