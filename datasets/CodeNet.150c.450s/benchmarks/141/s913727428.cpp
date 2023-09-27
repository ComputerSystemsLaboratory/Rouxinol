#include <iostream>
#include <cmath>

double gaiseki(double[2], double[2]);

int main(){
	double triPoint1[2];	//三角形の点1
	double triPoint2[2];	//三角形の点2
	double triPoint3[2];	//三角形の点3
	double pPoint[2];		//点Pの座標

	while (std::cin >> triPoint1[0] >> triPoint1[1]
		>> triPoint2[0] >> triPoint2[1]
		>> triPoint3[0] >> triPoint3[1]
		>> pPoint[0] >> pPoint[1]){
		double vector1_2[2] = { triPoint2[0] - triPoint1[0], triPoint2[1] - triPoint1[1] };
		double vector1_p[2] = { pPoint[0] - triPoint1[0], pPoint[1] - triPoint1[1] };
		double vector2_3[2] = { triPoint3[0] - triPoint2[0], triPoint3[1] - triPoint2[1] };
		double vector2_p[2] = { pPoint[0] - triPoint2[0], pPoint[1] - triPoint2[1] };
		double vector3_1[2] = { triPoint1[0] - triPoint3[0], triPoint1[1] - triPoint3[1] };
		double vector3_p[2] = { pPoint[0] - triPoint3[0], pPoint[1] - triPoint3[1] };
		
		if ((gaiseki(vector1_2, vector1_p) > 0 && gaiseki(vector2_3, vector2_p) > 0 && gaiseki(vector3_1, vector3_p) > 0)
			|| (gaiseki(vector1_2, vector1_p) < 0 && gaiseki(vector2_3, vector2_p) < 0 && gaiseki(vector3_1, vector3_p) < 0)){
			std::cout << "YES" << std::endl;
		}
		else{
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}

double gaiseki(double vector1[2], double vector2[2]){
	return vector1[0] * vector2[1] - vector1[1] * vector2[0];
}
