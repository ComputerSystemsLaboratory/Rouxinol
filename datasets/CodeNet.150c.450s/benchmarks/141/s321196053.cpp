#include <iostream>
using namespace std;

bool judge(double x1, double x2, double x3, double y1, double y2, double y3, double xp, double yp)
{
    if (((x2 - x1) * (yp - y2)) - ((y2 - y1) * (xp - x2)) > 0)
    {
        if (((x3 - x2) * (yp - y3)) - ((y3 - y2) * (xp - x3)) > 0)
        {
            if (((x1 - x3) * (yp - y1)) - ((y1 - y3) * (xp - x1)) > 0)
            {
                return true;
            }
        }
    }
    if (((x2 - x1) * (yp - y2)) - ((y2 - y1) * (xp - x2)) < 0)
    {
        if (((x3 - x2) * (yp - y3)) - ((y3 - y2) * (xp - x3)) < 0)
        {
            if (((x1 - x3) * (yp - y1)) - ((y1 - y3) * (xp - x1)) < 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main(void){
    double x1, x2, x3, y1, y2, y3;
    double xp, yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        bool d;
        d = judge(x1, x2, x3, y1, y2, y3, xp, yp);
        if(d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

