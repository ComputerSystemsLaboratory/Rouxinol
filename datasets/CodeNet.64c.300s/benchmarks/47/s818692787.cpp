#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int nums[101]={0};
	int a;
	
	while( scanf(" %d", &a) != EOF ){
		++nums[a];
	}
	
	int max=0;
	for(int i=1; i<=100; ++i)
		if(max < nums[i]) max=nums[i];
		
	for(int i=1; i<=100; ++i)
		if(max==nums[i])
			printf("%d\n", i);
			
	return 0;
}