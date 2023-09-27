#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>
using namespace std;

int main(void) {
    int input;
    int mode[1000];
    memset(mode, 0, sizeof(mode));
    int max = INT_MIN;
    while(cin >> input) {
        mode[input]++;
        if(mode[input] > max) max = mode[input];
    }
    for(int r = 0; r < 1000; r++) {
        if(mode[r] == max) cout << r << endl;
    }
    
    return(0);
}