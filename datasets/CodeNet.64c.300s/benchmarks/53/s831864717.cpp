#include <cstdio>

int main()
{
		int Count =0;
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		for (int i = a; i <= b; i++){
			if(c%i ==0){
				Count+=1;
		}
}
		printf("%d\n",Count);
}