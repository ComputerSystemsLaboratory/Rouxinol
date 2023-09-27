/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004&lang=jp*/

#include <iostream>

using namespace std;

int main(){
    double a, b, c, d, e, f;
    while(cin>>a>>b>>c>>d>>e>>f) {
        printf("%.3f %.3f\n",((int)((c * e - b * f) / (a * e - b * d)*10e3+0.5))/10e3,((int)((a * f - c * d) / (a * e - b * d)*10e3+0.5))/10e3);
    }
    return 0;
}