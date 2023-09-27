#include <stdio.h>
int main(){
	int n,i,counter,l,r;
	char s[3];
	
	while(1){
		l=2;
		r=2;
		counter=0;
	scanf("%d",&n);
	if(n==0)break;
	for(i=0;i<n;i++){
		scanf("%s",s);
			if(s[1]=='u'){
				if(l==0||r==0){
					l=2;
					r=2;
				}
				if(s[0]=='l')l=1;
				else if(s[0]=='r')r=1;
				if(l==1&&r==1){
					counter++;
					l=2;
					r=2;
				}
			}else if(s[1]=='d'){
				if(l==1||r==1){
					l=2;
					r=2;
				}
				if(s[0]=='l')l=0;
				else if(s[0]=='r')r=0;
				if(l==0&&r==0){
					counter++;
					l=2;
					r=2;
				}
			}
		}
		printf("%d\n",counter);
	}
		return 0;
}