/*AOJ 0012*/

#include<iostream>
using namespace std;

class Line_obj{
public:
	double x1,x2,y1,y2;

	void set(double sx1,double sx2,double sy1,double sy2){
		x1 = sx1;
		x2 = sx2;
		y1 = sy1;
		y2 = sy2;
	}

	int isUpDown(double x3,double y3){

		if( (x1-x2)*(y3-y1)+(y1-y2)*(x1-x3)>0){
			return 1;
		}
		else if( (x1-x2)*(y3-y1)+(y1-y2)*(x1-x3)<0){
			return -1;
		}
		else{
			return 0;
		}
	}

};

int main(){

	Line_obj line1,line2,line3;

	double x1,y1,x2,y2,x3,y3,xp,yp,xh,yh;

	while(cin>>x1){
		cin>>y1;
		cin>>x2;
		cin>>y2;
		cin>>x3;
		cin>>y3;
		cin>>xp;
		cin>>yp;

		line1.set(x1,x2,y1,y2);
		line2.set(x1,x3,y1,y3);
		line3.set(x2,x3,y2,y3);

		xh = (x1+x2+x3)/3.0;
		yh = (y1+y2+y3)/3.0;

		if( line1.isUpDown(xp,yp)*line1.isUpDown(xh,yh)<0 ||
			line2.isUpDown(xp,yp)*line2.isUpDown(xh,yh)<0 ||
			line3.isUpDown(xp,yp)*line3.isUpDown(xh,yh)<0){
				cout<<"NO"<<endl;
		}

		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}