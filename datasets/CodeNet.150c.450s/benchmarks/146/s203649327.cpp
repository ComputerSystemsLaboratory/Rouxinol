#include<iostream>

using namespace std;

int main(void){
	double x[4],y[4];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		double z1=(double)(x[0]-x[1])/(y[0]-y[1]);
		double z2=(double)(x[2]-x[3])/(y[2]-y[3]);
		if(x[0]-x[1]==0 && x[2]-x[3]==0 || y[0]-y[1]==0 && y[2]-y[3]==0)printf("YES\n");
		else if(z1==z2)printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}