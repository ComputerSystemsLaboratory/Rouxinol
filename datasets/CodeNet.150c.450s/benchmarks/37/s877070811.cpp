#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main(){
    
	double a, b, c, d, e, f;
    double x, y;
    
	while(cin>> a>> b>> c >> d>> e>> f){
        
        x = 0.0;
        y = 0.0;
        
                
        y = (c*d-f*a)/(b*d-a*e);
        
        x = (c-b*y) / a;

        if (x == 0) {
            x = 0;
        }
        else if (y == 0) {
            y = 0;
        }
        
        printf("%.3f %.3f\n", x, y);
        
        
	}
    
    
	return 0;
}