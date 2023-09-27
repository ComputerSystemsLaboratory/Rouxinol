#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    const int n = t;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(i == n-1){
            cout << arry[i];
        }
        else{
            cout << " " << arry[i];
        }


    }
    cout << endl;
}