#include <stdio.h>
int main(){
		int a,b,c,d;
		char op;
		while(true){
			scanf("%d %c %d",&a, &op, &b);
			if (op == '+' ){
		c = a+b;
		printf("%d\n",c);
	}
			else if(op == '-' ){
		c = a-b;
		printf("%d\n",c);
	}
			else if(op == '*' ){
		c = a*b;
		printf("%d\n",c);
			}
			else if(op == '/' ){
		c = 10*a/b;
		d = c-(c%10);
		d = d/10;
		c = d;
		printf("%d\n",c);
	}


			else {
		break;
	}

		};

	    return 0;
}