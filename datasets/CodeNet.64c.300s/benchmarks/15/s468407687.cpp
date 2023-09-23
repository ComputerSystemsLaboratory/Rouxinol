#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    REP(i, n) cin >> a[i];
    REP(i, n){
        int mini = i;
        for(int j = i; j < n ; j++){
            if(a[j] < a[mini])
                mini = j;
        }
        if(i != mini){
            count++;
            swap(a[i], a[mini]);
        }
    }

    REP(i, n-1) {
        cout << a[i] << " ";
    }

    cout << a[n-1] << endl << count << endl;

    return 0;
}