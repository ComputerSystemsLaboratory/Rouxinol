#include<stdio.h>
#include<algorithm>
using namespace std;
int b[15][6];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=a-1;i>=0;i--){
			for(int j=0;j<5;j++)scanf("%d",&b[i][j]);
		}
		bool chg=false;
		int ret=0;
		do{
			chg=false;
			for(int i=0;i<a;i++){
				int len=0;
				int now=0;
				for(int j=0;j<6;j++){
					if(now!=b[i][j]){
						if(~now&&len>=3){
							ret+=len*now;
							for(int k=j-len;k<j;k++)b[i][k]=-1;
							chg=true;
						}
						now=b[i][j];
						len=1;
					}else len++;
				}
			}
			for(int i=0;i<5;i++){
				int at=0;
				for(int j=0;j<a;j++){
					if(~b[j][i]){
						b[at++][i]=b[j][i];
					}
				}
				for(int j=at;j<a;j++)b[j][i]=-1;
			}
	//		for(int i=a-1;i>=0;i--){
	//			for(int j=0;j<5;j++)printf("%2d ",b[i][j]);
	//			printf("\n");
	//		}printf("\n");
		}while(chg);
		printf("%d\n",ret);
	}
}