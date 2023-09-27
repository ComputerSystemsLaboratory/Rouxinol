#include <stdio.h>

int main(){
  int count, input;
  long long min=1000001, max=-1000001, sum=0;
  scanf("%d", &count);
  for(int i=0;i<count;i++){
    scanf("%d", &input);
    if(input<min) min = input;
    if(input>max) max = input;
    sum += input;
  }
  printf("%lld %lld %lld\n", min, max, sum);
  return 0;
}