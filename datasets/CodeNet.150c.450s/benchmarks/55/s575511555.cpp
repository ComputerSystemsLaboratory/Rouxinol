#include <cstdio>
#include <cstring>

int main(){
  char str1[1001];
  
  scanf("%s", str1);
  
  while(strcmp(str1, "0") != 0){
    int sum = 0;
    for(int i = 0; i < (int)strlen(str1); ++i){
      int a = str1[i] - '0';
      sum += a;
    }
    printf("%d\n", sum);
    scanf("%s", str1);
  }
  
  return 0;
}