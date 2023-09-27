#include <cstdio>
#include <cmath>

double x[4],y[4];

struct vektor{
	double x,y;
	vektor(){}
	vektor(double xx,double yy){
		x=xx;
		y=yy;
	}
};

vektor vek[3];

vektor make_vektor(int i,int j){
	return vektor(x[j]-x[i],y[j]-y[i]);
}

bool check(){
	double s=-(vek[2].x*vek[1].y-vek[2].y*vek[1].x)/(vek[1].x*vek[0].y-vek[1].y*vek[0].x);
	double t=(vek[2].x*vek[0].y-vek[2].y*vek[0].x)/(vek[1].x*vek[0].y-vek[1].y*vek[0].x);
	//printf("%.3f %.3f\n",s,t);
	if(s>0 && t>0 && s+t<1)return true;
	return false;
}

int main(void){
	while(~scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])){
		for(int i=0;i<3;i++){
			vek[i]=make_vektor(0,i+1);
		}
		printf("%s\n",check()?"YES":"NO");
	}
	return 0;
}