#include <stdio.h>
#include <string.h>
#include <math.h>

int decode(char a[256]);
char* encode(int num);

char mcxi[4]={'i','x','c','m'};

int main(){
	int n,num,i,j,t;
	char a[256],b[256];
	scanf("%d",&n);
	while(n--){
		char s[256];j=0;
		scanf("%s %s",a,b);
		num = decode(a)+decode(b);
		for(i=3;i>-1;i--){
			t=(int)(num/pow(10.0,i))%10;
			if(t>1){
				s[j++]=t+48;
				s[j++]=mcxi[i];
			}
			else if(t==1) s[j++] = mcxi[i];
		}
		s[j] = '\0';
		printf("%s\n",s);
	}
	return 0;
}

int decode(char a[256]){
	int i,j,len=strlen(a);
	int num=0;
	for(i=0;i<4;i++){
		for(j=0;j<len;j++){
			if(mcxi[i]==a[j]){
				if(a[j-1]<58&&j){
					num += (a[j-1]-48)*(int)pow(10.0,i);
				}
				else num+=(int)pow(10.0,i);
				break;
			}
		}
	}
	return num;
}
char* encode(int num){
	int i,j=0,t;
	char s[256];
	for(i=3;i>-1;i--){
		t=(int)(num/pow(10.0,i))%10;
		if(t>1){
			s[j++]=t+48;
			s[j++]=mcxi[i];
		}
		else if(t==1) s[j++] = mcxi[i];
	}
	s[j] = '\0';
	return s;
}