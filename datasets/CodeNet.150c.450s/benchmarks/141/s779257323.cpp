#include<cstdio>

using namespace std;
 
#define god(x1,y1,x2,y2,x3,y3) x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)

int main(){
	double x1,y1,x2,y2,x3,y3,ax,ay;

	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&ax,&ay) != EOF){
		if(god(x1,y1,x2,y2,x3,y3) > 0.0 && god(ax,ay,x1,y1,x2,y2) > 0.0 &&
			god(ax,ay,x3,y3,x1,y1) > 0.0 &&  god(ax,ay,x2,y2,x3,y3) > 0.0){
				printf("YES\n");
		}
		else if(god(x1,y1,x2,y2,x3,y3) < 0.0 && god(ax,ay,x1,y1,x2,y2) < 0.0 &&
			god(ax,ay,x3,y3,x1,y1) < 0.0 &&  god(ax,ay,x2,y2,x3,y3) < 0.0){
				printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}