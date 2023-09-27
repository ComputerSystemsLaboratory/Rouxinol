#include <iostream>

bool is_same_side(double x1, double x2, double y1, double y2, double px1, double py1, double px2, double py2)
{
        return ((px1 - x1)*(py1 - y2)-(px1 - x2)*(py1 - y1))*((px2 - x1)*(py2 - y2)-(px2 - x2)*(py2 - y1)) > 0;
}

int main()
{
        double x1, x2, x3, y1, y2, y3, xp, yp;
        while(std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp)
                if(     is_same_side(x1, x2, y1, y2, x3, y3, xp, yp) &&
                        is_same_side(x2, x3, y2, y3, x1, y1, xp, yp) &&
                        is_same_side(x3, x1, y3, y1, x2, y2, xp, yp))
                        std::cout << "YES" << std::endl;
                else
                        std::cout << "NO" << std::endl;
        return 0;
}