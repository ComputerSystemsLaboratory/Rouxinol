#include<stdio.h>

int main(void)
{
	int i,n;
	char x[1050];
	
	x[0]='1';
	for(;x[0]!='0';){
		
		n=0;
		scanf("%s",x);
		
		for(i=0;x[i]!='\0';i++){
			
			if(x[i]=='1'){
				
				n=n+1;
			}
			else if(x[i]=='2'){
				
				n=n+2;
			}
			else if(x[i]=='3'){
				
				n=n+3;
			}
			else if(x[i]=='4'){
				
				n=n+4;
			}
			else if(x[i]=='5'){
				
				n=n+5;
			}
			else if(x[i]=='6'){
				
				n=n+6;
			}
			else if(x[i]=='7'){
				
				n=n+7;
			}
			else if(x[i]=='8'){
				
				n=n+8;
			}
			else if(x[i]=='9'){
				
				n=n+9;
			}
			else n=n;
		}
		if(n!=0){
			
			printf("%d\n",n);
		}
	}
	return 0;
}