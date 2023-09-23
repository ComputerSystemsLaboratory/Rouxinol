#include <cstdio>
int main(){
	int a,b,c;
	int sum;
	char grade;
	while(1){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b+c==-3) break;

		if(a==-1||b==-1) grade = 'F';
		else{
			sum = a+b;
			if(sum<30) grade = 'F';
			else if(sum<50){
				if(c>=50) grade = 'C';
				else grade = 'D';
			}
			else if(sum<65) grade = 'C';
			else if(sum<80) grade = 'B';
			else grade = 'A';
		}
		printf("%c\n",grade);
	}
}