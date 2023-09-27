#include<iostream>
#include<complex>
#include<math.h>
using namespace std;

typedef complex<double> xy_t;
double x[4], y[4];

const double EPS = 1e-11;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 4; j++) {
            cin >> x[j] >> y[j];
        }
        if (abs((y[1] - y[0])*(x[3] - x[2]) - (y[3] - y[2])*(x[1] - x[0])) < EPS)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}