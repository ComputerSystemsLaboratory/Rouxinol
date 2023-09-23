#include<stdio.h>
int main()
{
	int a,b;
	for(int i=0;;i++)
  {
	  scanf("%d %d",&a,&b);
	  if(a==0&&b==0) break;
	  int sum=0;
	 for(int x=1;x<=a;x++)
	 {
		for(int y=x+1;y<=a;y++)
		{
			for(int z=y+1;z<=a;z++)
			{
				if(x+y+z==b) 
				{
				  sum++;
				}
			}
		}
	 }
     printf("%d\n", sum);
  }
	return 0;
}