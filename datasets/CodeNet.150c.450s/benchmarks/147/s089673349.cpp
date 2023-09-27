#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int main() {
    int N = 0;
    scanf("%d", &N);
    int increament = 0;
    vector<long>v (N,0);

    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            for (int z = 1; z <= 100; z++) {
                int expr = (x * x + y * y + z * z + x * y + x * z + z * y);
                if (expr != 0 && expr <= N) {
                    v[expr - 1]++;
                }
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        string str = to_string(v[i]);
        const char* l = str.c_str();
        printf(l);
        printf("\n");
    }

    return 0;
}