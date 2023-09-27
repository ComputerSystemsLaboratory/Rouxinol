#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;

int main(){
    vector<int> yama;
    for (int i=0; i<10; i++) {
        int hi;
        cin >>hi;
        yama.push_back(hi);
    }
    sort(yama.begin(), yama.end());
    for (int i=0; i<3; i++) {
        cout << yama[9-i]<<endl;
    }
}