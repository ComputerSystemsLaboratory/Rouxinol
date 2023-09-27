#include <cstdio>
using namespace std;

int main(){
	char str[25];
	
	for(int i = 0; i < 25; i++) str[i] = 0;
	
	scanf("%s", str);
	
	int p = 25;
	while(str[--p] == 0);
	while(p >= 0){
		printf("%c", str[p--]);
	}
	printf("\n");
	
	return 0;
}