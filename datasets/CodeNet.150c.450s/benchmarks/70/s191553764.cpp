#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int m, d;
	int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	
	while( scanf(" %d %d", &m, &d)*m != 0 ){
		int i=0, c=0;
		while(i<=m-2){
			c+=days[i];
			++i;
		}
		c+=d;
	
		//printf("%d\n", c);
		if(c%7==1) printf("Thursday\n");
		else if(c%7==2) printf("Friday\n");
		else if(c%7==3) printf("Saturday\n");
		else if(c%7==4) printf("Sunday\n");
		else if(c%7==5) printf("Monday\n");
		else if(c%7==6) printf("Tuesday\n");
		else if(c%7==0) printf("Wednesday\n");
	}

	return 0;
}