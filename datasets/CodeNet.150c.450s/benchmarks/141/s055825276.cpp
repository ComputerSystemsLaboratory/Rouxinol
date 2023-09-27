#include <iostream>
#include <complex>
using namespace std;

struct coordinates{
	double x;
	double y;
};
typedef struct coordinates coordinates_t;

coordinates_t sub_vector( const coordinates_t &a, const coordinates_t &b)
{
	coordinates_t ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}


int main()
{
	
	coordinates_t A,B,C,P;
	while(cin >>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>P.x>>P.y){
		
		coordinates_t AB = sub_vector(B, A);
		coordinates_t BP = sub_vector(P, B);
		
		coordinates_t BC = sub_vector(C, B);
		coordinates_t CP = sub_vector(P, C);
		
		coordinates_t CA = sub_vector(A, C);
		coordinates_t AP = sub_vector(P, A);
		
		// 外積
		double c1 = AB.x*BP.y - AB.y*BP.x;
		double c2 = BC.x*CP.y - BC.y*CP.x;
		double c3 = CA.x*AP.y - CA.y*AP.x;
		
		if(( c1>0&&c2>0&&c3>0) || (c1<0&&c2<0&&c3<0)){
			cout <<"YES" <<endl;
		}else{
			cout <<"NO" <<endl;
		}
		
	}
	return 0;
}
	