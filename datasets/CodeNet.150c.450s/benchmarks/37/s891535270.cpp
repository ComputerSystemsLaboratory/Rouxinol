#include<cstdio>
int main(){
	int a[2][2],b[2];
	float a_inverse[2][2];
	float answer[2];
	while(scanf("%d %d %d %d %d %d",&a[0][0],&a[0][1],&b[0],&a[1][0],&a[1][1],&b[1]) != EOF){
		float delta = a[0][0] * a[1][1] - a[1][0] * a[0][1];
		a_inverse[0][0] = a[1][1] / delta;
		a_inverse[1][1] = a[0][0] / delta;
		a_inverse[0][1] = -a[0][1] / delta;
		a_inverse[1][0] = -a[1][0] / delta;
		answer[0] = a_inverse[0][0] * b[0] + a_inverse[0][1] * b[1];
		answer[1] = a_inverse[1][0] * b[0] + a_inverse[1][1] * b[1];
		printf("%.3f %.3f\n",answer[0],answer[1]);
	}
	return 0;
}