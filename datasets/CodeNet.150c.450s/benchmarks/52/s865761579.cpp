#include<stdio.h>
int main(){
	int a,b,c,d,train[100];
	b=0;
	c=0;
	
	int g;
	int cont = 0;
	
	for(a=0;a<1000;a++){
		if(scanf("%d",&g)==-1){
			break;
		}
		
		if(g != 0){
			train[cont] = g;
			cont++;
		}
		else{
			printf("%d\n",train[cont-1]);
			cont--;
		}
		/*
		if(cont == 0){
			break;
		}
		*/
		/*
		if(train[a]==0){
			c++;
		}else{
			b++;
		}
		if(b==c){
		break;
		} 
		*/
	}
	return 0;
}