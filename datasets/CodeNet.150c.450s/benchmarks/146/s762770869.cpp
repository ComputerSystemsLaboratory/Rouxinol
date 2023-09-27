#include <iostream>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin>>x1;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		double x12 = x2-x1;
		double y12 = y2-y1;
		double x34 = x4-x3;
		double y34 = y4-y3;
		if(x12<0){
			x12 *= -1;
			y12 *= -1;
		}
		if(x34<0){
			x34 *= -1;
			y34 *= -1;
		}
		if(x12==0&&x34==0){
			cout<<"YES"<<endl;
		} else if(x12==0||x34==0){
			cout<<"NO"<<endl;
		} else {
			if(y12/x12==y34/x34){
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}