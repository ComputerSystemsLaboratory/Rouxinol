#include<stdio.h>
#include<algorithm>
using namespace std;
int d[11];
int main(){
	
	for(int i=0;i<10;i++)scanf("%d",d+i);
	std::sort(d,d+10);
	printf("%d\n%d\n%d\n",d[9],d[8],d[7]);
}