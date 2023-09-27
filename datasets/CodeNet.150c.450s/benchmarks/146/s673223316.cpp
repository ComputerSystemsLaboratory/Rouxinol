#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		x2-=x1; y2-=y1;
		x4-=x3; y4-=y3;
		if(x2*y4-y2*x4==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}