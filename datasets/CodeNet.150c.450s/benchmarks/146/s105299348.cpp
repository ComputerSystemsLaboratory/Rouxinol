#include<iostream>
#include<cmath>
using namespace std;
#define EPS 1e-10
 
double a,b,c,d,e,f,g,h;
double det(){
    double dx1,dy1,dx2,dy2;
    dx1 = a-c;
    dy1 = b-d;
    dx2 = e-g;
    dy2 = f-h;
    return dx1*dy2 - dy1*dx2;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        cout<<(fabs(det())<EPS?"YES":"NO")<<endl;
    }
    return 0;
}