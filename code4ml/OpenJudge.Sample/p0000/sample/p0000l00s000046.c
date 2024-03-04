#include<stdio.h>
int main(void)
{
	int height_of_mountain[10];
	int i,max1,max2,max3;

	for(i=0;i<10;i++)
	{
		scanf("%d",&height_of_mountain[i]);
	}


	max1=max2=max3=height_of_mountain[1];

	for(i=0;i<9;i++)
	{
		if(max1<height_of_mountain[i+1])
		{
			max1=height_of_mountain[i+1];
		}
	}
	for(i=0;i<9;i++)
	{
		if(max2<height_of_mountain[i+1]&&height_of_mountain[i+1]<max1)
		{
			max2=height_of_mountain[i+1];
		}
	}
	for(i=0;i<9;i++)
	{
		if(max3<height_of_mountain[i+1]&&height_of_mountain[i+1]<max2)
		{
			max3=height_of_mountain[i+1];
		}
	}


	printf("%d\n",max1);
	printf("%d\n",max2);
	printf("%d\n",max3);


	return 0;
}