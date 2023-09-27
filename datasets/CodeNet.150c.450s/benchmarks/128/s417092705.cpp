#include <stdio.h>

using namespace std;


int main(){
	char buf[21];
	int length=0;

	scanf("%s",buf);
	for(int i=0;buf[i]!='\0';i++)length++;
	for(int i=length-1;i>=0;i--)printf("%c",buf[i]);
	printf("\n");

    return 0;
}