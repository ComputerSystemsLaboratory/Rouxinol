#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

#define PI 3.141592653

bool cross(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4){
    double a,b,c,d;
    
    a=(x3-x4)*(y1-y3)+(y3-y4)*(x3-x1);
    b=(x3-x4)*(y2-y3)+(y3-y4)*(x3-x2);
    c=(x1-x2)*(y3-y1)+(y1-y2)*(x1-x3);
    d=(x1-x2)*(y4-y1)+(y1-y2)*(x1-x4);
    
    if((c<0)^(d<0))
        return true;
    else
        return false;
}

int main(){
    double x[3],y[3],x_p,y_p;
    
    while(EOF!=scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x_p,&y_p)){

        bool f = true;
        
        for(int i=0;i<3;i++){
    
            if(cross(x[i], y[i], x[(i+1)%3], y[(i+1)%3],x[(i+2)%3], y[(i+2)%3], x_p, y_p)){
                f=false;
            }
            
        }
        
        if(f){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    
    return 0;
}