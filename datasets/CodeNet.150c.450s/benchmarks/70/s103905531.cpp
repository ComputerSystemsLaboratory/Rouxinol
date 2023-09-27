#include<stdio.h>

int Zeller(int,int,int);

int main(void){
  int i,j,sum,a,b;
  
  while(1){
    sum=0;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)break;

    switch(Zeller(2004,a,b)){
    case 0:
      printf("Sunday\n");
      break;
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    }
  }
  return 0;
}

int Zeller(int year, int month, int day){
    if (month<3) {
        year--;
        month += 12;
    }
    return (year + year/4 - year/100 + year/400
            + (13*month+8)/5 + day) % 7;
}