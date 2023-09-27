#include <iostream>
#include <cmath>
 
using namespace std;
 
const double EPS = 1e-10;
 
int
main()
{
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
 
    cin >> n;
 
    while (n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
        if (fabs((x2 - x1) * (y4 - y3) - (x4 - x3) * (y2 - y1)) < EPS)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}