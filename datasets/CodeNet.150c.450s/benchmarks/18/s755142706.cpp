#include <iostream>
#include <cmath>
#include <cstdio>
#define DEFAULT 100000
#define EPS 1e-10
using namespace std;

typedef long long ll;

double ceiler(double start) {
    //cout << start << endl;
    start /= 1000;
   // start += EPS;
    //cout << "start:" << start << endl;
    start = ceil(start);
    start *= 1000;
    return(start);
}

void check(int num) {
    cout << ceiler(num) << endl;
}

int main(void) {
    double start = DEFAULT;
    int num; cin >> num;
    for(int r = 0; r < num; r++) {
        start *= 1.05;
        start = ceiler(start);
        //cout << start << endl;
    }
    printf("%d\n", (int)start);
    return(0);
}