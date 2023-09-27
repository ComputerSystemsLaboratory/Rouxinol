#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int len,len2,i,j,flg=0,cnt,k;
	char s[202],s1[202],p[202];
	scanf("%s",s);
	scanf("%s",p);
	strcpy(s1,s);
	strcat(s,s1);
	len=strlen(s);
	len2=strlen(p);
	for(i=0;i<len2;i++){
		for(j=0;j<len;j++){
			if(s[j]==p[i]){
				cnt=1;
				for(k=1;k<=len2;k++){
					if(s[j+k]==p[i+k]){
						cnt++;
					}
					else break;
				}
				if(cnt==len2)	flg=1;
			}
		}
	}
	if(flg==1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
	