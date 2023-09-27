#include<stdio.h>

int main()

{
    int height[15],i,j,temp;

    for(i=0;i<10;i++)
        scanf("%d",& height[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(height[i]>height[j]){

                temp=height[j];
                 height[j]=height[i];
                 height[i]=temp;

            }
        }
    }
      for(i=9;i>6;i--)
      {
          printf("%d\n",height[i]);

      }
    return 0;
}