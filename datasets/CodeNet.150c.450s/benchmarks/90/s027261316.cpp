#include<cstdio>

using namespace std;

int main(void){
	int in[100],data,ans[100],cnt,work=0;
	int i,j;	//ループカウンタ

	for(i=0;i<100;i++){
		ans[i]=0;
		in[i]=0;
	}

	for(i=0;i<100;i++){
		if(scanf("%d",&data)==EOF)	break;	//EOF=Ctrl+z
		in[data]++;
	}
	
	for(i=1;i<100;i++)
		if(in[work]<in[i])	work=i;
	
	ans[0]=work;
	cnt=0;
	for(i=1;i<100;i++){
		if(in[work]==in[i] && i!=work){
			cnt++;
			ans[cnt]=i;
		}
	}

	for(i=0;i<=cnt-1;i++){
		for(j=1;j<=cnt;j++){
			if(ans[i]>ans[j]){
				work=ans[i];
				ans[i]=ans[j];
				ans[j]=work;
			}
		}
	}
	
	for(i=0;i<=cnt;i++)
		printf("%d\n",ans[i]);

	return 0;
}