#include<stdio.h>
int main(){
	int a;
    scanf("%d",&a);
    while(a--){
     int b,flag=1;
     int right=0,left=0;
     for(int i=0;i<10;i++){
     	scanf("%d",&b);
     	if(b>right){
		 right=b;continue;}
		if(b>left){
			left=b;continue;
		}
		if(flag)
     	printf("NO\n");
     	flag=0;
	 }
	 if(flag)
	 printf("YES\n");
	}
	return 0;
}