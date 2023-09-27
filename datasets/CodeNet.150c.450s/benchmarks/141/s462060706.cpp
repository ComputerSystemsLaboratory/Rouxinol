#include<iostream>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(cin>>x1){
		cin>>y1>>x2>>y2>>x3>>y3>>xp>>yp;
		double a1,a2,a3;
		a1=(x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
		a2=(x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
		a3=(x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);
		if((a1>0 && a2>0 && a3>0) || (a1<0 && a2<0 && a3<0)){
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}