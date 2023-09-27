#include <iostream>
using namespace std;

struct Vector{
	double x;
	double y;
};

Vector sub_vector(Vector &a , Vector &b){
	Vector ret;
	ret.x=a.x-b.x;
	ret.y=a.y-b.y;
	return ret;
}

int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	Vector v[4];
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		v[0].x=x1; //a
		v[0].y=y1;
		v[1].x=x2; //b
		v[1].y=y2;
		v[2].x=x3; //c
		v[2].y=y3;
		v[3].x=xp; //p
		v[3].y=yp;
		Vector ba = sub_vector(v[0] , v[1]);
		Vector bp = sub_vector(v[3] , v[1]);
		Vector cb = sub_vector(v[1] , v[2]);
		Vector cp = sub_vector(v[3] , v[2]);
		Vector ac = sub_vector(v[2] , v[0]);
		Vector ap = sub_vector(v[3] , v[0]);
		double c1 = ba.x * bp.y - ba.y * bp.x; //??????
		double c2 = cb.x * cp.y - cb.y * cp.x;
		double c3 = ac.x * ap.y - ac.y * ap.x;
		if((c1<0 && c2<0 && c3 <0)||(c1>=0 && c2>=0 && c3>=0)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		
	}
	return 0;
}