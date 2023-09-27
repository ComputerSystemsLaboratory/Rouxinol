//
//  main.cpp
//

#include <iostream>
//#include <algorithm>
#include <vector>
//#include <limits>
#include <math.h>
//#include <queue>
//#include <tuple>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//#include "string.h"
//#include <unordered_map>
#include <unordered_set>
//#include <array>
#include <set>
#include <limits>

using namespace std;

using ll = long long;

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == 0) {
            return 0;
        }
        set<int> cities;
        vector<vector<int>> dists(10, vector<int>(10, 100000));
        for (int i = 0; i < 10; i++) {
            dists[i][i] = 0;
        }
        for (int i = 0; i < N; i++) {
            int ai, bi, ci;
            cin >> ai >> bi >> ci;
            dists[ai][bi] = ci;
            dists[bi][ai] = ci;
            cities.insert(ai);
            cities.insert(bi);
        }
        for (int k = 0; k < 10; k++) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    dists[i][j] = min(dists[i][j], dists[i][k]+dists[k][j]);
                }
            }
        }
        int minCity = -1;
        int minSum = numeric_limits<int>::max();
        for (int cityA : cities) {
            int sum = 0;
            for (int cityB : cities) {
                sum += dists[cityA][cityB];
            }
            if (sum < minSum) {
                minCity = cityA;
                minSum = sum;
            }
        }
        printf("%d %d\n", minCity, minSum);
    }
    return 0;
}

/*
6
0 1 80
1 2 20
0 2 60
2 3 50
3 4 60
1 4 90
0
*/

