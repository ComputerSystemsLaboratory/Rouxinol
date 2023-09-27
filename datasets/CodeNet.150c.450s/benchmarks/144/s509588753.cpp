#include <iostream>
using namespace std;
int main(void){
    int _n,_m,_l;
    cin >> _n >> _m >> _l;
    
    int a[_n][_m];
    int b[_m][_l];
    long c[_n][_l];

    for(int n=0;n<_n;n++){
        for(int l=0;l<_l;l++){
            for(int m=0;m<_m;m++){
                a[n][m]=0;
                b[m][l]=0;
                c[n][l]=0;
            }
        }
    }
    
    for(int n=0;n<_n;n++){
        for(int m=0;m<_m;m++){
            int v;
            cin >> v;
            a[n][m] = v;
        }
    }
    
    for(int m=0;m<_m;m++){
        for(int l=0;l<_l;l++){
            int v;
            cin >> v;
            b[m][l] = v;
        }
    }
    
    for(int n=0;n<_n;n++){
        for(int l=0;l<_l;l++){
            for(int m=0;m<_m;m++){
                c[n][l] += a[n][m] * b[m][l];
            }
        }
    }
    
    for(int n=0;n<_n;n++){
        for(int l=0;l<_l;l++){
            if(l)cout<< " ";
            cout << c[n][l];
        }
        cout << endl;
    }

}