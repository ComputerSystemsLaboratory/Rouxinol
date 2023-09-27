#include <stdio.h>

int main(void)
{
  int sec;
  int min;
  int hour;
			 
  sec = 0;
  min = 0;
  hour = 0;
			  
  scanf("%d", &sec);
					   
  if(sec >= 60) {
    min = sec / 60;
    sec = sec % 60;
  }
  if(min >= 60){
    hour = min / 60;
    min = min % 60;
  }

  printf("%d:%d:%d\n", hour, min, sec);
												 
  return 0;
}