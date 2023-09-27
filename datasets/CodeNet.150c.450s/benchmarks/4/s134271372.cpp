#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<complex>
using namespace std;

void grading(int m, int f, int r){
    if(m == -1 || f == -1) {cout << "F" <<endl;return;}
    if(m+f >= 80) {cout << "A" <<endl;return;}
    if(m+f >= 65) {cout << "B" <<endl;return;}
    if(m+f >= 50) {cout << "C" <<endl;return;}
    if(m+f >= 30){
        if(r >= 50) {cout << "C" <<endl;return;}
        cout << "D" <<endl;return;
    }
    if(m+f < 30) {cout << "F" << endl;return;}
}

int main(){
    int m, f, r;
    cin >> m >> f >> r;
        while( m!=-1 || f !=-1 || r!=-1){
            grading(m ,f, r);
            cin >> m >> f >> r;
        }
    return 0;
}