#include <stdio.h>
#include<math.h>
using namespace std;

int main(){
	int a[4],b[4],work[10],hit,blow;
	while(scanf("%d %d %d %d\n%d %d %d %d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])!=EOF){
		hit = blow = 0;
		for(int i=0;i < 10;i++)work[i] = -1;
		for(int i=0;i<4;i++)work[a[i]]=i;
		for(int i=0;i<4;i++){
			if(work[b[i]] == i)hit++;
			else if(work[b[i]] != -1)blow++;
		}
		printf("%d %d\n",hit,blow);
	}

    return 0;
}