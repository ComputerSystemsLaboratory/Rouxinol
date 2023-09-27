#include<stdio.h>
int main(){
	char s[1200];
	int c;
	int cnt=0;
	
	
	while((c=getchar())!=EOF){
		if(c>='a'&&c<='z'){
			c=c-32;
		}else if(c>='A'&&c<='Z'){
			c=c+32;
		}
		s[cnt]=c;
		cnt++;
		putchar(c);
	}
	
	return 0;
}