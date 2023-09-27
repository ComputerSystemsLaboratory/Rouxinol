#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define ll         long long
#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

int main(){
    int n;
    cin >> n;
    int p_taro = 0, p_hanako = 0;
    FOR(i, 0, n){
        string taro, hanako;
        cin >> taro >> hanako;
        if(taro==hanako){
            p_taro++;
            p_hanako++;
        }
        else taro > hanako ? p_taro += 3 : p_hanako += 3;
    }
    cout << p_taro << " " << p_hanako << endl;
}