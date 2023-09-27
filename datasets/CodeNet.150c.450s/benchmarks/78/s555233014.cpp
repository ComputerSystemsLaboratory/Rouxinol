#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <stack>
#include <fstream>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
#include <functional>
#include <unordered_map>

using namespace std;

typedef int64_t ll;
vector<int> polc;
array<int, 1000000> p, od;

void calc(){
    for (int i = 0; i < p.size(); ++i) {
        p[i] = od[i] = i;
    }

    for(auto&& plc: polc){
        for (int i = plc; i < p.size(); ++i) {
            p[i] = min(p[i], p[i-plc] + 1);
        }
        if(plc % 2) {
            for (int i = plc; i < p.size(); ++i) {
                od[i] = min(od[i], od[i - plc] + 1);
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 1; i < 1000; ++i) {
        int pl = i*(i+1)*(i+2) / 6;
        if(pl > 1000000) break;
        polc.push_back(pl);
    }
    int n;
    calc();
    while(cin >> n){
        if(n == 0)
            break;
        cout << p[n] << ' ' << od[n] << endl;
    }


}

