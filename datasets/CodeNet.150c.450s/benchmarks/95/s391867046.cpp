#include<stdio.h>
char str[3];
int main(){
	int a;
	while(scanf("%d",&a),a){
		int ret=0;
		int p=0;int q=0;
		int last=0;
		for(int i=0;i<a;i++){
			scanf("%s",str);
			if(str[0]=='l'&&str[1]=='u')p++;
			if(str[0]=='l'&&str[1]=='d')p--;
			if(str[0]=='r'&&str[1]=='u')q++;
			if(str[0]=='r'&&str[1]=='d')q--;
			if((p+q)%2==0&&last!=p+q){
				ret++;
				last=p+q;
			}
		}
		printf("%d\n",ret);
	}
}