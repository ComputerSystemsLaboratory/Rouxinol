#include <cstdio>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){

float l[6];
float x,y;

while(scanf("%f %f %f %f %f %f",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5]) != EOF){
	
	x=(l[2]*l[4]-l[1]*l[5])/(l[0]*l[4]-l[1]*l[3]);
	y=(l[2]*l[3]-l[0]*l[5])/(l[1]*l[3]-l[0]*l[4]);
	if(x==0)x=0;
	if(y==0)y=0;
	printf("%.3lf %.3lf\n",x,y);		

}

return 0;		
}