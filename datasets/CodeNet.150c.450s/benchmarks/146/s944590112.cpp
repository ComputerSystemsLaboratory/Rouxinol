#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    double x1,y1,x2,y2,x3,y3,x4,y4;

    cin >> n;

    //a(x1,y1) b(x2,y2) c(x3,y3) d(x4,y4)
    for( int i = 0; i < n; i++ )
    {   
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        double px, py, qx, qy;
        px = x2 - x1;
        py = y2 - y1;
        qx = x4 - x3;
        qy = y4 - y3;

        if( fabs( px * qy - py * qx ) < 1e-10 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
