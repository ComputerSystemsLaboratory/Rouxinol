#include <iostream>

struct Vec2D{
				double x,y;
};

Vec2D vector(double x1,double y1,double x2,double y2){
				Vec2D vec;
				vec.x = x2 -x1;
				vec.y = y2 -y1;
				return vec;
}

double outerProduct(Vec2D a,Vec2D b){
				double crossProduct = a.x * b.y - a.y * b.x;
				return crossProduct;
}

int main(int argc, char *argv[])
{
	double x1,x2,x3,y1,y2,y3,x,y;

	while(std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y){

		Vec2D BA = vector(x2,y2,x1,y1);
		Vec2D CB = vector(x3,y3,x2,y2);
		Vec2D AC = vector(x1,y1,x3,y3);


		Vec2D BP = vector(x2,y2,x,y);
		Vec2D CP = vector(x3,y3,x,y);
		Vec2D AP = vector(x1,y1,x,y);

		double a,b,c;

		a = outerProduct(BA,BP);
		b = outerProduct(CB,CP);
		c = outerProduct(AC,AP);



		if((a<0 && b<0 && c<0) || (a>0 && b>0 && c>0)){
					std::cout << "YES" << std::endl;
		}else{
					std::cout << "NO" << std::endl;
		}

	}
	return 0;
}