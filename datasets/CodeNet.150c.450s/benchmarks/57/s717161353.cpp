#include<stdio.h>
int main(){
	int a, b, hasil;
	char op;
	for(int i=0; ; i++){
		scanf("%d %c %d", &a, &op, &b);
		if(op=='+'){
			hasil = a + b;
			printf("%d\n", hasil);
		}
		else if(op=='-'){
			hasil = a - b;
			printf("%d\n", hasil);
		}
		else if(op=='*'){
			hasil = a * b;
			printf("%d\n", hasil);
		}
		else if(op=='/'&&b!=0){
			hasil = a/b;
			printf("%d\n", hasil);
		}
		else if(op=='?'){
			break;
		}
	}
	
}
