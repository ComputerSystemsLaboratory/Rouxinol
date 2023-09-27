#include<stdio.h>
#include<string.h>

#define PRINT "print"
#define REVER "reverse"
#define REPLA "replace"

int main(){
	int a,b,q,i,j,k;
	char tmp;
	char comm[20],str[1001],p[1001];
	
	scanf("%s %d",str,&q);
	for(i=0;i<q;i++){
		scanf("%s",comm);
		if(strcmp(comm,PRINT) == 0){
			scanf("%d %d",&a,&b);
			for(j=a;j<=b;j++){
				printf("%c",str[j]);
			}
			printf("\n");
		}else if(strcmp(comm,REVER) == 0){
			scanf("%d %d",&a,&b);
			while(a<b){
				tmp = str[a];
				str[a] = str[b];
				str[b] = tmp;
				a++;
				b--;
			}
		}else if(strcmp(comm,REPLA) == 0){
			scanf("%d %d %s",&a,&b,p);
			for(j=a;j<=b;j++){
				str[j] = p[j-a];
			}
		}
	}
	return 0;
}