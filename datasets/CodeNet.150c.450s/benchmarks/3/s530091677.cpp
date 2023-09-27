#include<stdio.h>
char str[1024],input[2048];

void print(void){
	int i,a,b;
	sscanf(input,"print %d %d",&a,&b);
	
	for(i=a;i<=b;i++){
		printf("%c",str[i]);
	}
	printf("\n");
}

void reverse(void){
	int i,a,b;
	char tmp;
	sscanf(input,"reverse %d %d",&a,&b);
	
	for(i=0;i<(b-a+1)/2;i++){
		tmp=str[a+i];
		str[a+i]=str[b-i];
		str[b-i]=tmp;
	}
}

void replace(void){
	int i,a,b;
	char tmp[1024];
	sscanf(input,"replace %d %d %s",&a,&b,&tmp);
	
	for(i=0;i<b-a+1;i++){
		str[a+i]=tmp[i];
	}
	
	
}

int main(){
	int i,num;
	
	fgets(str,sizeof str,stdin);
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%d",&num);
	
	for(i=0;i<num;i++){
		fgets(input,sizeof input,stdin);
		switch(input[2]){
			case 'p':
				replace();
			break;
				
			case 'v':
				reverse();
			break;
				
			case 'i':
				print();
			break;
		}
	}
	
	
	return 0;
}