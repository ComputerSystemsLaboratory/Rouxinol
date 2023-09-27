#include <stdio.h>

int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
char weeks[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main(){

  int i;
  for(i=1;i<12;i++) days[i] += days[i-1];

  int m,d;
  while(1){
    scanf("%d%d", &m, &d);
    if(m==0) break;
    
    d += days[m-1]+3;
    d %= 7;

    printf("%s\n", weeks[d]);
  }
}