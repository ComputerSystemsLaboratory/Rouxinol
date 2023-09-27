#include<stdio.h>
int main()
{
	int m,d,dl[11]={31,29,31,30,31,30,31,31,30,31,30};
	int y=2;
	char yb[][10]={
		"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
	};
	while(1){
		y=2;
		scanf("%d%d",&m,&d);
		if(m==0){
			break;
		}
		if(m!=1){
			for(int i=2;i<=m;i++){
				y+=dl[i-2];
			}
		}
		y+=d;
		printf("%s\n",yb[y%7]);
	}
	return 0;
}