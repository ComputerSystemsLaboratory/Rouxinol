#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int d[251];

int main(){
    int h;
    cin >> h;
    for(int i = 0; i < h; i++){
        cin >> d[i];
    }
    for(int i = 0; i < h; i++){
        printf("node %d: key = %d, ", i + 1, d[i]);
        if(i > 0) printf("parent key = %d, ", d[(i - 1) / 2]);
        if(2 * i + 1 < h) printf("left key = %d, ", d[(2 * i + 1)]);
        if(2 * i + 2 < h) printf("right key = %d, ", d[(2 * i + 2)]);
        printf("\n");
    }
}