#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    double a,b,c,d,e,f;
    double ansX,ansY;
    while(std::cin >> a >> b >> c >> d >> e >> f){
        ansX = (c*e - b*f) / (a*e - b*d);
        ansX *= 1000;
        if(ansX > 0) 
            ansX += 0.5;
        else 
            ansX -= 0.5;
        ansX = int(ansX);
        ansX /= 1000;
        
        ansY = (a*f - c*d) / (a*e - b*d);
        ansY *= 1000;
        if(ansY > 0) 
            ansY += 0.5;
        else
            ansY -= 0.5;
        ansY = int(ansY);
        ansY /= 1000;
        
        std::cout <<fixed << setprecision(3) << ansX << " " << fixed << setprecision(3)<<ansY << std::endl;
    }
    
    return 0;
}