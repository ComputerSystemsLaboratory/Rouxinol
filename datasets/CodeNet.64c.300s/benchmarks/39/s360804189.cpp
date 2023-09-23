#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,i,j;
	while(scanf("%d",&a)!=EOF){
		s=0;
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				for(f=0;f<=9;f++){
					for(g=0;g<=9;g++){
						if(a==i+j+f+g){
							s++;
						}
					}
				}
			}
		}
		printf("%d\n",s);
	}
	return 0;
}