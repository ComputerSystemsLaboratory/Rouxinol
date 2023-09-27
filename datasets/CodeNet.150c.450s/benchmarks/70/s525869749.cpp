#include<stdio.h>
int main(void)
{
	int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int man,day;
	int s;
	int i;
	
	scanf("%d %d",&man,&day);
	while(man!=0){
		s=0;
		if(man!=1){
			for(i=0;i<man-1;i++){
				s+=m[i];
			}
			s+=day;
		}
		else {
			s+=day;
		}
	//	printf("%d\n",s);
		s=s%7;
		if(s==0){
			printf("Wednesday\n");
		}
		else if(s==1){
			printf("Thursday\n");
		}
		else if(s==2){
			printf("Friday\n");
		}
		else if(s==3){
			printf("Saturday\n");
		}
		else if(s==4){
			printf("Sunday\n");
		}
		else if(s==5){
			printf("Monday\n");
		}
		else if(s==6){
			printf("Tuesday\n");
		}
		scanf("%d %d",&man,&day);
	}
	return 0;
}