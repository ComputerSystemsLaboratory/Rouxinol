#include <stdio.h>
#define min(a,b) a > b ? b : a

int pow(int n,int m){
	int sum = 1;
	for(int i = 0;i < m;i++)
		sum *= n;
	return sum;
}

int main(void){
	int y, z, e, m;
	while(1){
		scanf("%d",&e);
		if(e == 0)
			break;
		m = 0x7FFFFFFF;
		for(z = 0;pow(z,3) <= e;z++){
			for(y = 0;pow(y + 1,2) <= e - pow(z,3);y++);
			m = min((z + y + (e - pow(z,3) - pow(y,2))),m);
		}
		printf("%d\n",m);
	}
	return 0;
}