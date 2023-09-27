#include<stdio.h>
#include<string.h>
char c[9][6]={".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char s[1025];
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %s",s);
		int len=strlen(s);
		int p=-1;
		int cnt=0;
		for(j=0;j<len;j++){
			if(s[j]=='0'){
				if(p==-1)continue;
				if(p==0)cnt%=5;
				else if(p==6||p==8)cnt%=4;
				else cnt%=3;
				printf("%c",c[p][cnt]);
				p=-1;
				cnt=0;
			}else{
				if(p==-1)p=s[j]-'1';
				else cnt++;
			}
		}
		puts("");
	}
	return 0;
}