#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main (int argc, char *argv[]) {
    int e;
    while (cin>>e, e) {
        int m = e;
        for (int z = 0; z * z * z <= e; ++z) {
            for (int y = 0; y * y <= e - z * z * z; ++y) {
                int x = e - y * y - z * z * z;
                m = min(m, x + y + z);
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
