#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    while(true){
        int e;
        int min = INT_MAX;
        cin >> e;
        if(e==0) break;
        for(int z=0; z < cbrt(e)+1; z++){
            for(int y=0; y < sqrt(e-z*z*z)+1; y++){
                if(e-z*z*z-y*y >= 0){
                    int tmp = z+y+(e-z*z*z-y*y);
                    if(tmp < min) min = tmp;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}