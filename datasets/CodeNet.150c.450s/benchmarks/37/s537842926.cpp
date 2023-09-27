#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(3);
    double a, b, c, d, e, f;
    while(cin>>a>>b>>c>>d>>e>>f) {
        cout<<(c*e-b*f)/(a*e-b*d)+0<<' '<<(a*f-c*d)/(a*e-b*d)+0<<'\n';
    }
    return 0;
}

