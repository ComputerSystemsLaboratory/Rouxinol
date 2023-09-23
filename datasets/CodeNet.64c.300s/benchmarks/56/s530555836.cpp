#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stdio.h>

using namespace std;
const int NOT_LEAP_YEAR = 19*5+20*5;
const int LEAP_YEAR = 20*10;
const int MAX = 100;

int Mill(int Y,int M,int D){
    int days;
    int quot=(Y-1)/3;
    days= LEAP_YEAR*quot + NOT_LEAP_YEAR*((Y-1)-quot);
    if(Y%3==0){
        days+=(20*(M-1));
    }else{
        days+=(19*((M-1)/2) +20*(M/2));
    }
    days+=D;

    return days;
}

int main(){
    int n,y[MAX],m[MAX],d[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y[i] >> m[i] >> d[i];
    }

    int fesDay=Mill(1000,1,1);
    for (int i = 0; i < n; i++)
    {
        cout << fesDay - Mill(y[i], m[i], d[i]) << endl;
    }

    return 0;
}