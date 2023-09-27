#include <stdio.h>



#ifndef DEBUG 
#define fprintf (void)
#endif 

int main(void){

	char str[1001],cstr[1000];
	char memory;
	char trash;
	char order;
	int q,a,b;
	int i,j,k;
	i=0;
	
	while(1){
		scanf("%c",&str[i]);
		if(str[i]=='\n'){
			break;
		}
		cstr[i]=str[i];
		i++;
	}
	
	scanf("%d",&q);

	for(i=0;i<q;i++){
		for(j=0;j<3;j++){
			scanf("%c",&trash);
		}
		scanf("%c",&order);
		while(1){
			scanf("%c",&trash);
			if(trash==' '){
				break;
			}
		}
		if(order=='p'){
			fprintf(stdout,"route rep\n");
			scanf("%d",&a);
			scanf("%d",&b);
			scanf("%c",&trash);
			for(j=a;j<=b;j++){
				scanf("%c",&memory);
				str[j]=memory;
				cstr[j]=memory;
				fprintf(stdout,"%c",str[j]);
			}
			fprintf(stdout,"\n");
			fprintf(stdout,"route rep end\n");
		}else if(order=='v'){
			fprintf(stdout,"route rev\n");
			scanf("%d",&a);
			scanf("%d",&b);
			fprintf(stdout,"%d-%d\n",a,b);
			for(j=a;j<=b;j++){
				str[j]=cstr[b-j+a];
				fprintf(stdout,"%c",str[j]);
			}
			fprintf(stdout,"\n");
			for(j=a;j<=b;j++){
				cstr[j]=str[j];
			}
			fprintf(stdout,"route rev end\n");
		}else{
			fprintf(stdout,"route print\n");
			scanf("%d",&a);
			scanf("%d",&b);
			for(j=a;j<=b;j++){
				printf("%c",str[j]);
			}
			printf("\n");
			fprintf(stdout,"route print\n");
		}
	}
	
	return 0;
}