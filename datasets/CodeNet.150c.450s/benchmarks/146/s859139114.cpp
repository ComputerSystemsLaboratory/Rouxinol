#include <stdio.h>
#include<cmath>
using namespace std;

int main(){
	double x1,x2,x3,x4,y1,y2,y3,y4;
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

		if(abs((y2 - y1)*(x4 - x3) - (y4 - y3)*(x2 - x1) ) < 0.0000000001){ //I copied yutaka watabe's code here
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}
    return 0;
}