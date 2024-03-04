#include <stdio.h>
int main(void)
{
  int mount[10];
  int top[3];
  int i;
  for (i = 0; i < 3; i++){
      top[i] = 0;
  }
  for (i = 0; i < 10; i++){
      scanf("%d", &mount[i]);
      if (mount[i] > top[0]){
	  	top[2] = top[1];
	  	top[1] = top[0];
        top[0] = mount[i];
      }
      else if (mount[i] > top[1]){
	  	top[2] = top[1];
        top[1] = mount[i];
      }
      else if (mount[i] > top[2]){
        top[2] = mount[i];
      }
  }
  for (i = 0; i < 3; i++){
      printf("%d\n", top[i]);
  }
  return (0);
}