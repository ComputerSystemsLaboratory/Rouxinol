#include <iostream>
using namespace std;

class Triangle {

public:
	double Cross_Product_AB_AP, Cross_Product_BC_BP, Cross_Product_CA_CP;
	double Vec_ABx, Vec_BCx, Vec_CAx, Vec_APx, Vec_BPx, Vec_CPx;
	double Vec_ABy, Vec_BCy, Vec_CAy, Vec_APy, Vec_BPy, Vec_CPy;


	Triangle(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp);

	bool IsInTriangle();
};


Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp){



	//??????????±???????
	//A(x1,y1),B(x2,y2),C(x3,y3),P(xp,yp)??¨????????????
	
	Vec_ABx = x2 - x1;
	Vec_BCx = x3 - x2;
	Vec_CAx = x1 - x3;
	Vec_APx = xp - x1;
	Vec_BPx = xp - x2;
	Vec_CPx = xp - x3;

	Vec_ABy = y2 - y1;
	Vec_BCy = y3 - y2;
	Vec_CAy = y1 - y3;
	Vec_APy = yp - y1;
	Vec_BPy = yp - y2;
	Vec_CPy = yp - y3;



	//AB??AP
	Cross_Product_AB_AP = Vec_ABx*Vec_APy - Vec_ABy*Vec_APx;
	//BC??BP
	Cross_Product_BC_BP = Vec_BCx*Vec_BPy - Vec_BCy*Vec_BPx;
	//CA??CP
	Cross_Product_CA_CP = Vec_CAx*Vec_CPy - Vec_CAy*Vec_CPx;

};


//????§???¢????????¨????????????????????????????????????
bool Triangle::IsInTriangle(){

	if ((Cross_Product_AB_AP >= 0 && Cross_Product_BC_BP >= 0 && Cross_Product_CA_CP >= 0) ||
		(Cross_Product_AB_AP <= 0 && Cross_Product_BC_BP <= 0 && Cross_Product_CA_CP <= 0)){

		return true;
	
	}
	else { return false;}

};


int main(){

	double x1, y1, x2, y2, x3, y3, xp, yp;

	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
	
		//????§???¢???????????§????????????
		Triangle Triangle(x1, y1, x2, y2, x3, y3, xp, yp);
		if (Triangle.IsInTriangle() == true){
			cout << "YES"<<endl;
		}
		else if (Triangle.IsInTriangle() == false) {
			cout << "NO" << endl;
		}
	}


	return 0;
}