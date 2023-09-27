//外積を使う

#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

typedef struct{
	double x;
	double y;
}Vector;

Vector sub_vector(Vector a, Vector b){
	Vector ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}

int main(){
	
	Vector A, B, C,P;

	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &A.x,&A.y,&B.x,&B.y,&C.x,&C.y,&P.x,&P.y) != EOF){
		Vector AB = sub_vector(B, A);
		Vector BP = sub_vector(P, B);

		Vector BC = sub_vector(C, B);
		Vector CP = sub_vector(P, C);

		Vector CA = sub_vector(A, C);
		Vector AP = sub_vector(P, A);

		double c1 = AB.x * BP.y - AB.y * BP.x;
		double c2 = BC.x * CP.y - BC.y * CP.x;
		double c3 = CA.x * AP.y - CA.y * AP.x;

		if ((c1 > 0 && c2 > 0 && c3 > 0) || (c1 <0 && c2 < 0 && c3 < 0)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}

	return 0;
}