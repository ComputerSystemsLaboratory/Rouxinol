#include <iostream>
#include <complex>
 
using namespace std;
 
typedef complex<double> P;
 
#define EPS (1e-10)
#define EQ(a, b) (abs((a) - (b)) < EPS)
#define EQV(a, b) ((EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()))
 
double cross(P a, P b) 
{
    return (a.real() * b.imag() - a.imag() * b.real());
}
 
bool is_parallel(P a1, P a2, P b1, P b2) 
{
    return EQ(cross(a1 - a2, b1 - b2), 0.0);
}
 
 
int main()
{
    int num;
    double  x1, y1, x2, y2, x3, y3, x4, y4;
     
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
         
        if (is_parallel(P(x1, y1), P(x2, y2), P(x3, y3), P(x4, y4)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}