#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

const int MAX_INT = 2147483647;

using namespace std;
int main(){
    int x,e,m,ypi,zpi;
    while(true){
        cin >> e;
        if(e==0) break;
        int minM=MAX_INT;
        for(int zi=0;zi<=100;zi++){
            zpi=zi*zi*zi;
            if (e-zpi<0) break;
            for(int yi=0;yi<=1000;yi++){
                ypi=yi*yi;
                if(e-ypi-zpi<0) break;
                x=e-ypi-zpi;
                m=x+yi+zi;
                minM=min(minM,m);
            }
        }
        cout << minM << endl;
    }
    return 0;
}