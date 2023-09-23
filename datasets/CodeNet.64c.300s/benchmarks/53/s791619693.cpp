#include <stdio.h>

using namespace std;

int main(){
	int cat,but,cg,count = 0;
	scanf("%d %d %d",&cat,&but,&cg);
	for(int i = cat; i <= but; i++){
		if(cg%i == 0) count++;
	}
	printf("%d\n",count);
}

