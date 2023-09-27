#include<iostream>

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		double abx, aby, bpx, bpy, bcx, bcy, cpx, cpy, cax, cay, apx, apy, z1, z2, z3;
		abx = x2 - x1; aby = y2 - y1;
		bpx = xp - x2; bpy = yp - y2;
		bcx = x3 - x2; bcy = y3 - y2;
		cpx = xp - x3; cpy = yp - y3;
		cax = x1 - x3; cay = y1 - y3;
		apx = xp - x1; apy = yp - y1;
		z1 = abx*bpy - aby*bpx;
		z2 = bcx*cpy - bcy*cpx;
		z3 = cax*apy - cay*apx;
		if ((z1 > 0 && z2 > 0 && z3 > 0) || (z1 < 0 && z2 < 0 && z3 < 0)) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}