#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	char retu[201],kara[201],zan[200];
	int i,j,m,len,h,len2,rr,x;
	while(1){
		scanf("%s",retu);
		if(retu[0]=='-') break;
		len=strlen(retu);
		scanf("%d",&m);
		for(i=0;i<m;i++) {
			scanf("%d",&h);
			x=len-h;
			for(j=0;j<h;j++) {
				kara[x]=retu[j];
				x++;
			}
			x=0;
			for(j=h;j<len;j++){
				kara[x]=retu[j];
				x++;
			}
			for(j=0;j<len;j++){
				retu[j]=kara[j];
			}
		}
		printf("%s\n",retu);
	}
	return 0;
}
			
	
	
	