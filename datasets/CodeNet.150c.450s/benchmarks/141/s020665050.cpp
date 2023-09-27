#include <iostream>

struct vector3 {
    double x, y, z;
    vector3(double x, double y, double z): x(x), y(y), z(z) {}
};

vector3 cross_product(const vector3 &v1, const vector3 &v2)
{
    return vector3(v1.y*v2.z-v1.z*v2.y,v1.z*v2.x-v1.x*v2.z,v1.x*v2.y-v1.y*v2.x);
}

int main()
{
    while (true) {
        double x1, y1, x2, y2, x3, y3, xp, yp;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
        if (std::cin.eof()) break;

        vector3 p1(xp - x1, yp - y1, 0.0), p2(xp - x2, yp - y2, 0.0), p3(xp - x3, yp - y3, 0.0);
        vector3 cp1 = cross_product(p1, p2), cp2 = cross_product(p2, p3), cp3 = cross_product(p3, p1);
        if (cp1.z < 0.0 && cp2.z < 0.0 && cp3.z < 0.0) std::cout << "YES" << std::endl;
        else if (cp1.z > 0.0 && cp2.z > 0.0 && cp3.z > 0.0) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}