/*problem C*/

#include <iostream>
using namespace std;

typedef struct{
	double x,y;
}point_obj;

int isClossLine(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4){
	return ( (x1-x2)*(y3-y1)+(y1-y2)*(x1-x3))*((x1-x2)*(y4-y1)+(y1-y2)*(x1-x4));
}

int main(){
	point_obj p[5];
	int i,j;
	p[3].x=0;
	p[3].y=0;

	while(cin>>p[0].x){
		cin>>p[0].y;

		p[3].x=p[0].x;
		p[3].y=p[0].y;

		for(int i=1;i<3;i++){
			cin>>p[i].x,cin>>p[i].y;

			p[3].x+=p[i].x;
			p[3].y+=p[i].y;
		}
		cin>>p[4].x;
		cin>>p[4].y;
		p[3].x/=3.0;
		p[3].y/=3.0;

		if(isClossLine(p[0].x,p[0].y,p[1].x,p[1].y,p[3].x,p[3].y,p[4].x,p[4].y) > 0 &&
			isClossLine(p[1].x,p[1].y,p[2].x,p[2].y,p[3].x,p[3].y,p[4].x,p[4].y) >0 &&
			isClossLine(p[0].x,p[0].y,p[2].x,p[2].y,p[3].x,p[3].y,p[4].x,p[4].y) > 0){
			cout<<"YES"<<endl;
		}

		else{
			cout<<"NO"<<endl;
		}
	}
	
	
	return 0;
}