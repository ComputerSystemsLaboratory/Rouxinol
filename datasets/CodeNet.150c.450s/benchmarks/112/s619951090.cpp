#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	char convert[127],from[2],to[2],tmp[2];

	scanf("%d",&n);
	while(n != 0){

		for(int k=0;k<127;k++)convert[k] = 0;
		for(int i=0; i<n; i++){
			scanf("%s %s",from,to);
			convert[from[0]] = to[0];
		}
		scanf("%d",&m);
		for(int i=0; i<m; i++){
			scanf("%s",tmp);
			if(convert[tmp[0]] == 0)printf("%s",tmp);
			else{
				printf("%c",convert[tmp[0]]);
			}
		}
		printf("\n");
		scanf("%d",&n);
	}

	return 0;
}