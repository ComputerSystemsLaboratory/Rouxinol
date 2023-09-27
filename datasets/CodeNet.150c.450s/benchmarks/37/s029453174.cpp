#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a[3],b[3];
    double x=0,y=0;
    while(cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2]){
        x = (b[1]*a[2] - a[1]*b[2])/(a[0]*b[1] - a[1]*b[0]);
        y = (a[0]*b[2] - a[2]*b[0])/(a[0]*b[1] - a[1]*b[0]);
        x = (x<0.001 && x>-0.001) ? 0.0 : x;
        y = (y<0.001 && y>-0.001) ? 0.0 : y;
        cout << fixed << setprecision(3) <<  x << " " << y << endl;
    }
}