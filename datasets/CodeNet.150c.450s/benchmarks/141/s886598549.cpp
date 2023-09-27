#include <complex>
#include <stdio.h>
#include <math.h>
using namespace std;

// _ÀWð^Æ·é
typedef complex<double> P;
// ÎÌè`
#define PI 3.1415926535898

// e·éë·Ã
#define EPS (1e-10)
//XYÀW
#define X real()
#define Y imag()

//QÂÌdouble^Ìlªµ¢©Ç¤©
bool equal(double a, double b){
	return (fabs( a-b ) < EPS)? true : false ;
}
	
// Op`NX
class Triangle{

private:
	//Op`ÌR_ÌÀW
	P a, b, c;
	//Op`ÌRÓÌ·³
	double edgeA,edgeB,edgeC;
	//Op`ÌRpÌå«³(WA)
	double angleA,angleB,angleC;
	//]·è©çRÂÌpxðßéÖ
	double LawOfCosines(double a,double b, double c){
		return acos( (b*b+c*c-a*a) / (2.0*b*c) );
	}
	

public:
	//RXgN^(RÂÌ_ÆÓÆpxðú»)
	Triangle(P p1, P p2, P p3){
		a = p1;
		b = p2;
		c = p3;
		edgeB = abs(c-a);
		edgeA = abs(b-c);
		edgeC = abs(a-b);
		angleA = LawOfCosines(edgeA,edgeB,edgeC);
		angleB = LawOfCosines(edgeB,edgeC,edgeA);
		angleC = LawOfCosines(edgeC,edgeA,edgeB);
	}
	double getAngleC(){//pCÌpxðÏ¦·
		return angleC;
	}
};

int main(){
	double x1, x2, x3, y1, y2, y3, xp, yp, angle;

	while( scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF ){
		P a( x1 , y1 );
		P b( x2 , y2 );
		P c( x3 , y3 );
		P p( xp , yp );
		Triangle Tr1(a,b,p);
		Triangle Tr2(b,c,p);
		Triangle Tr3(c,a,p);
		angle = Tr1.getAngleC() + Tr2.getAngleC() + Tr3.getAngleC();
		if ( equal( 2.0*PI , angle) ){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}

	return 0;
}