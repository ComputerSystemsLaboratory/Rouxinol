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

int main(){
    int n;
    double x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4,slope_1,slope_2;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x_1,&y_1,&x_2,&y_2,&x_3,&y_3,&x_4,&y_4);
        
        if(x_1==x_2){
            
            if(x_3==x_4)
                puts("YES");
            else
                puts("NO");
            
            continue;
        }
        
        slope_1=(y_1-y_2)/(x_1-x_2);
        slope_2=(y_3-y_4)/(x_3-x_4);
        
        if(abs(slope_1-slope_2)<1e-7)
            puts("YES");
        else
            puts("NO");
    }
    
    return 0;
}