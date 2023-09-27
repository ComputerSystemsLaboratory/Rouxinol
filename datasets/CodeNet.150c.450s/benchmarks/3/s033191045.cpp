#include <stdio.h>
#include <math.h>
#include <string.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int len,q,a,b;
	char str[1010],order[20];
	scanf("%s %d",str,&q);
	rep(i,0,q){
		char p[1010];
		scanf("%s",order);
		if(strcmp(order,"print")==0){
			scanf("%d %d",&a,&b);
			rep(j,a,b+1){
				printf("%c",str[j]);
			}
			printf("\n");
		}else if(strcmp(order,"reverse")==0){
			scanf("%d %d",&a,&b);
			sprintf(p,"%s",str);
			rep(j,0,b-a+1){
				p[a+j]=str[b-j];
			}
			sprintf(str,"%s",p);
		}else if(strcmp(order,"replace")==0){
			scanf("%d %d %s",&a,&b,p);
			rep(j,0,b-a+1){
				str[a+j]=p[j];
			}
		}
	}
	return 0;
}