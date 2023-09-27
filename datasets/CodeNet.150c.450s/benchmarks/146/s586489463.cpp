#include <cstdio>
using namespace std;

int main(){

int n;
scanf("%d",&n);

float x[4],y[4];

for(int i=0;i<n;i++){
scanf("%f %f %f %f %f %f %f %f",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);

float det=(y[1]-y[0])*(x[2]-x[3])-(x[0]-x[1])*(y[3]-y[2]);

if(det==0)
	printf("YES\n");
else
	printf("NO\n");
}

return 0;
}