#include<stdio.h>
#include<string.h>

char s[128],p[128];
int l_s,l_p,count=0;

void check(int num){
	int i;
	count=0;
	for(i=0;i<l_p;i++){
		if(num==l_s){
			num=0;
		}
		if(p[i]==s[num]){
			//printf("%c\n",s[num]);
			count++;
		}else{
			break;
		}
		num++;
	}
}

int main(){
	int i,j;
	
	fgets(s,sizeof s,stdin);
	fgets(p,sizeof p,stdin);
	
	l_p=strlen(p);
	l_s=strlen(s);
	
	//\0???????????°????????????
	l_p--;
	l_s--;
	
	for(i=0;i<l_s;i++){
		if(p[0]==s[i]){
			check(i);
			if(count==l_p){
				break;
			}
		}
	}
	if(count==l_p){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}