#include<cstdio>
#include<cmath>

int main(){
	int n;
	double x[4], y[4];
	int xi[4], yi[4];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);

		for(int i = 0; i < 4; i++){
			xi[i] = (int)(x[i] * 1000000);
			yi[i] = (int)(y[i] * 1000000);
		}
		
		if((yi[0] - yi[1])*(xi[2] - xi[3]) == (xi[0] - xi[1])*(yi[2] - yi[3])){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}