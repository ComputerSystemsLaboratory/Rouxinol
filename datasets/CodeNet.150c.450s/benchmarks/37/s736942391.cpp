#include<iostream>
#include<iomanip>

using namespace std;

int main(){

double x, y, a, b, c, d, e, f;

while(cin >> a >> b >> c >> d >> e >> f){

x = (double) (c*e-f*b)/(a*e-b*d);
y = (double) (c*d-a*f)/(b*d-a*e);
if(x==0) x = 0;
if(y==0) y = 0;

cout << setiosflags(ios::fixed) << setprecision(3) << x << " " << y << endl;
}
}