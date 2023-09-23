#include <iostream>
#include <math.h>
using namespace std;

int e,minimum;

int solve(){
    minimum = e;
    for(int z=0;z*z*z<=e;z++){
        for(int y=0;y <= sqrt(e);y++){
            int x = e - z*z*z - y*y;
            if(x>=0)
                minimum = min(x+y+z,minimum);
        }
    }
    return minimum;
}

int main(){
    while(cin >> e && e!=0){
        cout << solve() << endl;
    }
}