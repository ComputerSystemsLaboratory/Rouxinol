#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int num[5];
  for(int i = 0;i < 5;i++){
    scanf("%d", num + i);
  }
  sort(num, num + 5);
  for(int i = 4;i >= 0;i--){
    if(i != 4)putchar(' ');
    printf("%d", num[i]);
  }
  puts("");
  return 0;
}