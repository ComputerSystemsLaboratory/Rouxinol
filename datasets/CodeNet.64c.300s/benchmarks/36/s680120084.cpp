#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int num[3]={0},num1=0,num2=0,num3=0;
	
	for( int i=0;i<3;i++ ){
		scanf("%d",&num[i]);
	}

	sort( num,num+3 );

	for( int i=0;i<3;i++ ){
		if( i != 2 ){
			printf("%d ",num[i]);
		}
		else{
			printf("%d\n",num[i]);
		}
	}

	return 0;
}