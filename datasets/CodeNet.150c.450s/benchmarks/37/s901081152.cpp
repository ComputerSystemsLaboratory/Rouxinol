#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    float a,b,c,d,e,f,x,y;
    while(cin >> a){
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;

        x = (-f+e*c/b)/(-d+a*e/b);
        y = (c-a*x)/b;
        x *= 10000.0f;
        y *= 10000.0f;
        x += 0.5f;
        y += 0.5f;
        x = (int)x;
        y = (int)y;
        x /= 10000.0f;
        y /= 10000.0f;
        printf("%.3f %.3f\n",x,y);

    }
    return 0;

}