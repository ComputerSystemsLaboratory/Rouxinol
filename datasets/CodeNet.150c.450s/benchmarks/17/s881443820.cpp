#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
	int c[5];
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i=0;i<5;i++)
	{
		cin >> c[i];
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(c[j]<c[j+1])
			{
				temp = c[j];
				c[j] = c[j+1];
				c[j+1] = temp;
			}
		}


	}
	for(i=0;i<5;i++)
	{
		if(i<4)
		{
			cout << c[i] << " ";
		}else{cout << c[i] << endl;}
	}

}