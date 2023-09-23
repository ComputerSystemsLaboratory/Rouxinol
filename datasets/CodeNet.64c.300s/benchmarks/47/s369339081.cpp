#include <iostream>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

int ok, arr[100];

int main(void) {
    memset(arr, 0, sizeof(arr));
    while(~scanf("%d", &ok)) {
        arr[ok] += 1;
    }
    int mx = *max_element(arr, arr + 100);
    for(int i = 0; i < 100; i++) {
        if(arr[i] == mx) {
            printf("%d\n", i);
        }
    }
    return 0;
}