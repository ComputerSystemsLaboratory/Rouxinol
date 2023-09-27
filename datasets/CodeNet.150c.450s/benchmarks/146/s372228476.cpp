#include <cstdio>
#include <complex>
using namespace std;
typedef complex<double> P;
const double EPS=1e-11;
int main(){
    int n;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if(abs((conj(P(x2-x1,y2-y1))*P(x4-x3,y4-y3)).imag()) < EPS) printf("YES\n");
        else printf("NO\n");
    }
}