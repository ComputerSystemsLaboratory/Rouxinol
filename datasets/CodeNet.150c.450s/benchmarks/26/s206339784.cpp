#include<cstdio>

int main() {
  //入力
  int a,b;
  std::scanf("%d%d",&a,&b);
  
  if(a < b) {
    std::printf("a < b");
  }
  else if(a > b) {
    std::printf("a > b");
  }
  else {
    std::printf("a == b");
  }
  std::printf("\n");
  
  return 0;
}
