#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

const int R = 10;
const int F = 3;
int main()
{
    int t;
    cin >> t;
    const int n = t;
    int Atou[F][R] = {};
    int Btou[F][R] = {};
    int Ctou[F][R] = {};
    int Dtou[F][R] = {};
    int b,f,r,v;
    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        switch(b){
            case 1:
                Atou[f-1][r-1] += v;
                break;
            case 2:
                Btou[f-1][r-1] += v;
                break;
            case 3:
                Ctou[f-1][r-1] += v;
                break;
            case 4:
                Dtou[f-1][r-1] += v;
                break;
            default:
                break;
        }
    }

    for(int i = 0; i < F; i++){
        for(int j = 0; j < R; j++){
            cout << " " << Atou[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < 20; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < F; i++){
        for(int j = 0; j < R; j++){
            cout << " " << Btou[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < 20; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < F; i++){
        for(int j = 0; j < R; j++){
            cout <<" "<< Ctou[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < 20; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < F; i++){
        for(int j = 0; j < R; j++){
            cout <<" "<< Dtou[i][j];
        }
        cout << endl;
    }


}