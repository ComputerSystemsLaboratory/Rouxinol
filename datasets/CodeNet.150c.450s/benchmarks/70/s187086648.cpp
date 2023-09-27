#include <stdio.h>

int main(void) {

  int month,day;

  int sum,day_w;
  int month_y[12]={31,29,31,30,31,30,31,31,30,31,30,31};

  int i;

  while(1) {

    scanf("%d %d",&month,&day);

    if(month==0 || day==0) break;

    sum=0;

    for(i=0;i<month-1;i++) {

      sum+=month_y[i];

    }

    sum+=day;

    day_w=sum%7;

    switch(day_w) {

    case 0:
      printf("Wednesday\n");
      break;

    case 1:
      printf("Thursday\n");
      break;

    case 2:
      printf("Friday\n");
      break;

    case 3:
      printf("Saturday\n");
      break;

    case 4:
      printf("Sunday\n");
      break;

    case 5:
      printf("Monday\n");
      break;

    case 6:
      printf("Tuesday\n");
      break;

    }

  }

  return 0;

}
      