#include <stdio.h>

using namespace std;

int main(){
	int nyo,nya,nyu;
	scanf("%d %d %d",&nyo,&nya,&nyu);
	if(nyo < nya && nya < nyu)
		printf("Yes\n");
	else{
		printf("No\n");
	}
}
