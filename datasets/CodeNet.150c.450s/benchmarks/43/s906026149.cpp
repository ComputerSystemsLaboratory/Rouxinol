#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int N;
    int A, B;
    while(cin >> N, N) {
        A = 0, B = 0;
        REP(i, N) {
            int s, t;
            scanf("%d%d", &s, &t);
            if(s > t) A += s + t;
            if(t > s) B += s + t;
            if(s == t) {A += s; B += t;}
        }
        
        cout << A << " " << B << endl;
    }
    return 0;
}