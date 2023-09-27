#include <iostream>
#include <math.h>
using namespace std;

int tax(int x,int p){
    return floor(p * (100+x) / 100);
}

int main(){
    while(true){
        int X,Y,S;
        cin >> X >> Y >> S;
        if(!(X|Y|S)) break;
        int maximum = 0;
        for (int i=1; i<S; ++i){
            for (int j=1; j<S; ++j){
                if (tax(X,i)+tax(X,j) == S){
                    maximum = max(maximum, tax(Y,i) + tax(Y,j));
                }
            }
        }
        cout << maximum << endl;
    }
}