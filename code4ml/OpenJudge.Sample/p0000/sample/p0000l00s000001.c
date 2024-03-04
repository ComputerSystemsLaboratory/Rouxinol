#include<stdio.h>
 
int main(void)
{
 int height[10];
 int max[3]={0};
 int i;
 
 for(i = 0; i < 10; i++)
 {
  scanf("%d",&height[i]);
  if(height[i]>max[0]){
   max[2] = max[1];
   max[1] = max[0];
   max[0] = height[i];
  }else if((max[0] >= max[1])&&(height[i]) > max[1]){
   max[2] = max[1];
   max[1] = height[i];  
  }else if((max[1] >= max[2])&&(height[i]) > max[2]){
   max[2] = height[i];
  }
 }
 for(i = 0; i < 3; i++)
 printf("%d\n",max[i]);
 return 0;
}