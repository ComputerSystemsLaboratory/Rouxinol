#include <iostream>
#include <cstdio>
using namespace std;

void swap(int &x, int &y) {
    x ^= y; y ^= x; x ^= y;
}

int main(void) {
    int select; scanf("%d", &select);
    int amida[select + 1];
    for(int r = 1; r <= select; r++) amida[r] = r;
    int horizon; scanf("%d", &horizon);
    for(int r = 0; r < horizon; r++) {
        int x, y; scanf("%d,%d", &x, &y);
        swap(amida[x], amida[y]);
    }
    for(int r = 1; r <= select; r++)cout << amida[r] << endl;
    return(0);
}