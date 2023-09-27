#include <iostream>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		double sall = (x1-x2)*(y1+y2) + (x2-x3)*(y2+y3) + (x3-x1)*(y3+y1);
		double s1 = (x1-x2)*(y1+y2) + (x2-xp)*(y2+yp) + (xp-x1)*(yp+y1);
		double s2 = (x1-xp)*(y1+yp) + (xp-x3)*(yp+y3) + (x3-x1)*(y3+y1);
		double s3 = (xp-x2)*(yp+y2) + (x2-x3)*(y2+y3) + (x3-xp)*(y3+yp);
		sall = sall < 0 ? -1*sall : sall;
		s1 = s1 < 0 ? -1*s1 : s1;
		s2 = s2 < 0 ? -1*s2 : s2;
		s3 = s3 < 0 ? -1*s3 : s3;
		// ½Ì©fabsÆ©absªstdilib.hÆ©CN[hµÄàg¦È¢
		if(sall == s1+s2+s3){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}