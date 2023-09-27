#include "bits/stdc++.h"
using namespace std;
int main() {
	int H,pazzle[10][5];
	while(scanf("%d",&H),H) {
		for(int i=0;i<H;i++) {
			for(int j=0;j<5;j++) {
				scanf("%d",&pazzle[i][j]);
			}
		}
		int ans=0;
		while(1) {
			bool ok=0;
			for(int i=0;i<H;i++) {
				int len=1,add=0;
				for(int j=1;j<5;j++) {
					if(pazzle[i][j]==pazzle[i][j-1]) {
						len++;
					}else {
						if(len>=3) {
							add=pazzle[i][j-1]*len;
							for(int k=0;k<len;k++) pazzle[i][j-1-k]=0;
						}
						len=1;
					}
				}
				if(len>=3) {
					add=pazzle[i][4]*len;
					for(int k=0;k<len;k++) pazzle[i][4-k]=0;
				}
				if(add>0) ans+=add,ok=1;
			}
			if(!ok) break;
			for(int j=0;j<5;j++) {
				int pos=H-1;
				for(int i=H-1;i>=0;i--) {
					if(pazzle[i][j]>0) pazzle[pos--][j]=pazzle[i][j];
				}
				for(int i=pos;i>=0;i--) pazzle[i][j]=0;
			}
		}
		printf("%d\n",ans);
	}
}