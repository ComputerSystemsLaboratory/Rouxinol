#include <iostream>

int sign(double x);

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double xp, yp;

    while (std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        double vec12_x_vec1p = (x2 - x1) * (yp - y1) - (y2 - y1) * (xp - x1);
        double vec23_x_vec2p = (x3 - x2) * (yp - y2) - (y3 - y2) * (xp - x2);
        double vec31_x_vec3p = (x1 - x3) * (yp - y3) - (y1 - y3) * (xp - x3);
        int judge = sign(vec12_x_vec1p) + sign(vec23_x_vec2p)
                  + sign(vec31_x_vec3p);

        if (judge == 1 + 1 + 1 || judge == -1 - 1 - 1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}

int sign(double x)
{
    return ((x >= 0)? 1: (-1));
}