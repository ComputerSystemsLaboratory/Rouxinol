#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	bool osenbei[15][15000][2];
	int h,w,a,b,c,sum,MAXN,ura[10];
	int osenbei2;
	while(true){
		cin>>h>>w;
		if(h==0 && w==0){
			break;
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>osenbei2;
				if(osenbei2==1){
					osenbei[i][j][0]=true;
					osenbei[i][j][1]=true;
				}
				else{
					osenbei[i][j][0]=false;
					osenbei[i][j][1]=false;
				}
			}
		}
		a=1;
		for(int k=0;k<h;k++){
			a *= 2;
		}
		MAXN=0;
		for(int i=0;i<a;i++){
			sum=0;
			for(int j=0;j<h;j++){
				b=1;
				for(int k=0;k<j;k++){
					b *= 2;
				}
				ura[j]=(i/b)%2;
				if(ura[j]==1){
					for(int k=0;k<w;k++){
						if(osenbei[j][k][1]==false){
							osenbei[j][k][1]=true;
						}
						else{
							osenbei[j][k][1]=false;
						}
					}
				}
			}
			for(int j=0;j<w;j++){
				c=0;
				for(int k=0;k<h;k++){
					if(osenbei[k][j][1]==false){
						c++;
					}
				}
				sum += max(h-c,c);
			}
			MAXN=max(sum,MAXN);
			for(int j=0;j<h;j++){
				for(int k=0;k<w;k++){
					osenbei[j][k][1]=osenbei[j][k][0];
				}
			}
		}
		cout<<MAXN<<endl;
	}
	return 0;
}