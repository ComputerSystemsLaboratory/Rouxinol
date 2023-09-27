#include <iostream>
using namespace std;

int main(void){
    long long e, x1, xmin;
    while(cin >> e){
        xmin=0;
        if(e == 0)  break;
        for(long i = 0; i*i <= e; i++){
        for(long j = 0; i*i+j*j*j <= e; j++){
            x1 = e - i*i - j*j*j;
            if(x1 < 0)  break;
            if(xmin == 0 || xmin > (x1 + i + j))
            xmin = x1 + i + j;
        }
        }
        cout << xmin << endl;
    }
    return 0;
}

