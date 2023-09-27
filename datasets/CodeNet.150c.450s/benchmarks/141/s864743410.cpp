#include<cstdio>
using namespace std;
int main(){
	double a[8],matrix[4],ans[2];
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]) != EOF){
		matrix[0] = a[2]-a[0];
		matrix[1] = a[4]-a[0];
		matrix[2] = a[3]-a[1];
		matrix[3] = a[5]-a[1];
		ans[0] = a[6]-a[0];
		ans[1] = a[7]-a[1];
		double t = matrix[0]*matrix[3]-matrix[1]*matrix[2];
		double x = matrix[3]*ans[0]/t-matrix[1]*ans[1]/t;
		double y = matrix[0]*ans[1]/t-matrix[2]*ans[0]/t;
		if(x+y<1 && x>0 && y>0){printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}