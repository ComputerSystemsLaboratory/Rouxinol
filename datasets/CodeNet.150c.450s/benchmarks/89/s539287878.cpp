#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b, c, i1, i2, i3;
    double i4;
    while(1){
        cin >> a >> b >> c;
        if(a==0)break;
        i1 = a;
        i3 = 0;
        while(1){
            i2 = 2;
            i4 = sqrt(i1);
            while(1){
                if(i1==1){break;}
                if(i1==2){i3++; break;}
                if(i1%i2==0){break;}
                i2++;
                if(i2 > i4){i3++; break;}
            }
            if(i3==c){cout << i1 << endl; break;}
            i1 = i1 + b;
        }
    }
    return 0;
}