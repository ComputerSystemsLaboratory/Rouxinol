#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,z,idx=0,sum;
    int formula = 0;
    int n;cin>>n;
    int start = 1;
    while(start <= n){
            int sqr = sqrt(start);
            sum = 0;
            for(x=1;x<=sqr;x++){
                for(y=1;y<=sqr;y++){
                    for(z=1;z<=sqr;z++){
                        formula = (x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(z*x);
                        if(formula == start)
                            sum++;
                        else if(formula > start)
                            break;
                    }
                }
            }
            cout<<sum<<endl;
            start++;
    }
    return 0;
}
