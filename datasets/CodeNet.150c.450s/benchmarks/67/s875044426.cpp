#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int input=0;
	int n,m,i,cnt;
	int finish=0;

	scanf("%d",&input);
	
	while(finish==0){
	cnt=0;
	i=0;
	for(m=2;i==0;m++){
		n = input-((m-1)*m/2);
		if(n<m){i=1;}
		else if(n%m==0){cnt+=1;}
	}
	
	printf("%d\n",cnt);
	
	scanf("%d",&input);
	if(input==0){finish=1;}
	}
	return 0;
}