#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <random>
#include <map>

using namespace std;

int fibArray[50];

void makeFibArray() {
    for (int i = 2; i <= 46; i++) {
	fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
}

int main() {

    //cin.tie(0);
    //ios::sync_with_stdio(false);

    int n; scanf("%d", &n);
    fibArray[0] = 1;
    fibArray[1] = 1;
    makeFibArray();
    printf("%d\n", fibArray[n]);


    return 0;

}


