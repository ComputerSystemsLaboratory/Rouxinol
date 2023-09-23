#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<ctype.h>
#include<math.h>
#include<map>
using namespace std;
int main() 
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int count=0;
		int i,j,k,l;
		for(i=0;i<=9;i++)
			for(j=0;j<=9;j++)
				for(k=0;k<=9;k++)
					for(l=0;l<=9;l++)
						if(i+j+k+l==n)
							count++;
		printf("%d\n",count);
	}
	return 0;
}
