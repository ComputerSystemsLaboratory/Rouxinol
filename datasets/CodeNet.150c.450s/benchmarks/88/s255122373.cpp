#include<iostream>
#include<cstdio>

using namespace std;

int h,w;

int main(void){
	while(1){
		scanf("%d%d",&h,&w);
		if(h+w==0)break;
		int rh=1145,rw=1419,hwt=h*h+w*w,rhwt=rh*rh+rw*rw;
		//i高さj幅
		for(int i=1;i<200;i++){
			for(int j=i+1;j<200;j++){
				if(i==h && w==j)continue;
				int t=i*i+j*j;
				if(hwt<t || (t==hwt && h<i)){
					if(t<rhwt || (t==rhwt && i<rh)){
						rh=i;
						rw=j;
						rhwt=rh*rh+rw*rw;
					}
				}
			}
		}
		printf("%d %d\n",rh,rw);
	}
	return 0;
}