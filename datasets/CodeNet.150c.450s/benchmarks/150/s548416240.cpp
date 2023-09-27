#include <cstdio>

constexpr int C_SIZE = 10000;

int main(){
  int n;
  int tmp_num;
  int C[C_SIZE];
  for(int i = 0; i < C_SIZE; i++){
    C[i] = 0;
  }
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &tmp_num);
    C[tmp_num]++;
  }
  int p = 0;
  for(int i = 0; i < n; i++){
    for(; p < C_SIZE; p++){
      if(C[p] >0){break;}
    }
    printf("%d", p);
    if(i != n-1) { printf(" "); }
    C[p]--;
  }
  printf("\n");
}