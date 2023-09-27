#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,cnt=0,len;
	char w[11],txt[1001];
	char o[27]={'A','B','C','D','E','F','G','H','I','J','K','L','N','M','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char c[27]={'a','b','c','d','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z'};
	scanf("%s",w);
	while(1){
		scanf("%s ",txt);
		if(strcmp("END_OF_TEXT",txt)==0) break;
		len=strlen(txt);
		for(i=0;i<len;i++){
			for(j=0;j<27;j++){
				if(txt[i]==o[j]){
					txt[i]=c[j];
				}
			}
		}
		if(strcmp(w,txt)==0) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
		