#include<iostream>

using namespace std;

int main()
{
	int sum,heights[10];
	for(int i = 0; i<10;i++)
	{
		cin>>heights[i];
	}
	for(int i = 1;i<10;i++)
		if(heights[i]>heights[0])
		{
			sum = heights[i];
			heights[i] = heights[0];
			heights[0] = sum;
		}
		//heights[0] = heights[i]>heights[0]?heights[i]:heights[0];
	for(int i = 2;i<10;i++)
		if(heights[i]>heights[1])
		{
			sum = heights[i];
			heights[i] = heights[1];
			heights[1] = sum;
		}
		//heights[1] = heights[i]>heights[1]?heights[i]:heights[1];
	for(int i = 3;i<10;i++)
		if(heights[i]>heights[2])
		{
			sum = heights[i];
			heights[i] = heights[2];
			heights[2] = sum;
		}
		//heights[2] = heights[i]>heights[2]?heights[i]:heights[2];
	cout<<heights[0]<<endl;
	cout<<heights[1]<<endl;
	cout<<heights[2]<<endl;
	return 0;
}