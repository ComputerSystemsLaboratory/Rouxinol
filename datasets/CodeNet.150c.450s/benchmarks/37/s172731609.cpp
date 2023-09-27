
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;

int main(){
    double a,b,c,d,e,f;
    while (cin >> a ,cin >> b, cin >> c, cin >> d ,cin >> e ,cin >>f) {
        double x,y;
        y = (c*d-f*a)/(b*d - e*a);
        x = (c - b * y)/a;
        printf("%.3f",x);
        cout << " ";
        printf("%.3f",y);
        cout << endl;
    }
    
}