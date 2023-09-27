#include <iostream>
#include <cfloat>
#include <cmath>
using namespace std;
 
 
//0021
int main(){
    double xA, yA, xB, yB, xC, yC, xD, yD;
    char ch;
	int n;

	cin >> n;
    for(int i=0; i<n; ++i){
		cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
        double x1,y1,x2,y2;
        y1=yB-yA;
        x1=xB-xA;
        y2=yD-yC;
        x2=xD-xC;
 
        if(fabs((x1*y2)-(x2*y1)) <= DBL_EPSILON){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
 
    }
 
}