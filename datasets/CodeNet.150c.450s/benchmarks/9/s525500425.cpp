#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
 
using namespace std;
 
string in, t;
int n, h;
 
 
int main(){
    while (true){
        cin >> in;
        if (in == "-") break;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> h;
            t = in.substr(0, h);
            in = in.substr(h, in.size());
            in += t;
        }
        cout << in << endl;
    }
}