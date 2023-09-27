#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define EPS 1e-9

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    double a, b, c, d, e, f;
    while(std::cin >> a >> b >> c >> d >> e >> f){
        double x = std::round(1000*(c*e-b*f)/(a*e-b*d))/1000;
        double y = std::round(1000*(a*f-c*d)/(a*e-b*d))/1000;
        std::cout << std::fixed << std::setprecision(3) << ((std::fabs(x)<EPS)?0:x) << " " << ((std::fabs(y)<EPS)?0:y) << "\n";
    }
    
    return 0;
}