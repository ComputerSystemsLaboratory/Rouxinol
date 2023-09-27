#include<stdio.h>
#include<algorithm>
using namespace std;
int x[200];
int y[200];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=1;i<a;i++){
			int b,c;scanf("%d%d",&b,&c);
			x[i]=x[b];
			y[i]=y[b];
			switch(c){
				case 0:x[i]--;break;
				case 1:y[i]--;break;
				case 2:x[i]++;break;
				case 3:y[i]++;break;
			}
		}
		int Xmin=99999;
		int Xmax=-99999;
		int Ymin=99999;
		int Ymax=-99999;
		for(int i=0;i<a;i++){
			Xmin=min(Xmin,x[i]);
			Xmax=max(Xmax,x[i]);
			Ymin=min(Ymin,y[i]);
			Ymax=max(Ymax,y[i]);
		}
		printf("%d %d\n",Xmax-Xmin+1,Ymax-Ymin+1);
	}
}