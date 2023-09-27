#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
#include <iomanip>
#define PI 3.1415926535
 
using namespace std;
 
int n, a = 0, b = 0;
string s, t;
 
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s >> t;
        if (s>t)a += 3;
        else if (s < t) b += 3;
        else {
            a++;
            b++;
        }
    }
    cout << a << " " << b << endl;
}