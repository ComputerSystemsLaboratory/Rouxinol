#include<iostream>
#include <iomanip>

int main(){
double a,b,c,d,e,f,a_,b_,c_,d_,e_,f_;
double x,y;
double in;
while (std::cin >>a>>b>>c>>d>>e>>f){
in = (a*e - b*d);
a_ = e/in;
b_ = -1*b/in;
d_ = -1*d/in;
e_ = a/in;
x = c * a_ + f*b_;
y = c*d_ + f*e_;
std::cout << std::setprecision(3) << std::fixed << x << ' ' << std::setprecision(3) << std::fixed <<  y << std::endl;
}
    return 0;
}