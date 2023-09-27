#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int v[5];

int main(void) {
    for(int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    sort(v, v + 5);
    reverse(v, v + 5);

    printf("%d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4]);

    return 0;
}