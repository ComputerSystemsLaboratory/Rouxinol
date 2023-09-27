#include <iostream>

class Triangle{
	u_int a, b, c;
public:
	Triangle(u_int x, u_int y, u_int z);
	~Triangle() = default;
	void isRightTriangle();
};

Triangle::Triangle(u_int x, u_int y, u_int z){
	a = x;
	b = y;
	c = z;
}

void Triangle::isRightTriangle(){
	if((a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

int main(){
	u_int n;
	std::cin >> n;
	
	for(u_int i = 0; i < n; ++i){
		u_int a, b, c;
		std::cin >> a >> b >> c;
		Triangle triangle(a, b, c);
		triangle.isRightTriangle();
	}
	
	return 0;
}