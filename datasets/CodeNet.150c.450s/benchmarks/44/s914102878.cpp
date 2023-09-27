#include <iostream>
#include <cstdio>
using namespace std;

int hit(int a[], int b[]) {
    int cnt = 0;
    for(int r = 0; r < 4; r++) {
        if(a[r] == b[r]) cnt++;
    }
    return(cnt);
}

//少し未完成なblow
int blow(int a[], int b[]) {
    int cnt = 0;
    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 4; c++) {
            if(a[r] == b[c]) cnt++;
        }
    }
    return(cnt);
}

int main(void) {
    int a[4], b[4];
    
    while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
        int hi = hit(a, b);
        int bl = blow(a, b) - hi;
        cout << hi << " " << bl << endl;
    }
    return(0);
}