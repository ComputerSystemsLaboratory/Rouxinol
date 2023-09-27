#include    <iostream>
#include    <cmath>

using namespace std;

typedef struct V2D {
    double x;
    double y;
}vect2D;

vect2D make_vect2D(double, double);
double calc_CrossProductZ(vect2D *, vect2D *);

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;
    double z1, z2, z3;
    vect2D v12, v23, v31, v1p, v2p, v3p;

    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        v12 = make_vect2D(x2 - x1, y2 - y1);
        v23 = make_vect2D(x3 - x2, y3 - y2);
        v31 = make_vect2D(x1 - x3, y1 - y3);
        v1p = make_vect2D(xp - x1, yp - y1);
        v2p = make_vect2D(xp - x2, yp - y2);
        v3p = make_vect2D(xp - x3, yp - y3);

        z1 = calc_CrossProductZ(&v12, &v2p);
        z2 = calc_CrossProductZ(&v23, &v3p);
        z3 = calc_CrossProductZ(&v31, &v1p);

        if((z1 > 0 && z2 > 0 && z3 > 0) || (z1 < 0 && z2 < 0 && z3 < 0)) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
 
    return 0;
}
 
vect2D make_vect2D(double dx, double dy) {
    vect2D res;
     
    res.x = dx;
    res.y = dy;
 
    return res;
}
 
double calc_CrossProductZ(vect2D *a, vect2D *b) {
    return (a->x * b->y - b->x * a->y);
}
