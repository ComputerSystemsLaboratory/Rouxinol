#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ????????§ ax+by=c, dx+ey=f ????§£?????????????????¨???????????¨???????¨????????????????(1)
    vector<vector<double>> answers;
    double a, b, c, d, e, f;
    int dump;
    while(cin >> a >> b >> c >> d >> e >> f) {
        double det = (double)(a*e-b*d);
        double ansx = (e*c+(-b)*f)/det;
        double ansy = ((-d)*c+a*f)/det;
        if(ansx == 0) ansx = 0.0;
        if(ansy == 0) ansy = 0.0;
        answers.push_back({ansx,ansy});
    }
    for(auto elm : answers) {
        cout << fixed << setprecision(3) << elm[0] << " " << elm[1] << endl;
    }

    return 0;
}