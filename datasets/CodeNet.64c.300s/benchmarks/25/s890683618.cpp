#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){

	int a[4],b[4];
	int hf,bf,hc,bc;

	while(scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])!=EOF){
		hc=0,bc=0;
		for(int i=0;i<4;i++){
			hf=0,bf=0;
			for(int j=0;j<4;j++){
				if(a[i]==b[j]){
					bf=1;
					if(i==j){
						hf=1;
					}
				}
			}
			if(hf==1){
				hc++;
			}
			else if(bf==1){
				bc++;
			}
		}
		printf("%d %d\n",hc,bc);
	}
	return 0;
}