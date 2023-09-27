#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	char str[21];
	int count=0;
	
	scanf("%s", str);
	
	while( str[count] != '\0' ) ++count;
	
	for(int i=count-1; i>=0; --i)
		printf("%c", str[i]); 
	printf("\n");

	return 0;
}