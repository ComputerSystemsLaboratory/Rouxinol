#include <iostream>
#include <cmath>
using namespace std;

const double eps=1e-10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(fabs((x2-x1)*(y4-y3)-(y2-y1)*(x4-x3))<eps) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}