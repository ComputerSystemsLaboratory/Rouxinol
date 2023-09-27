#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,taroup = 0,hanakop = 0;
    string tarou, hanako;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> tarou >> hanako;
        if (tarou == hanako) {
            taroup += 1;
            hanakop += 1;
        }
        else if (tarou > hanako) taroup += 3;
        else hanakop += 3;
    }

    printf("%d %d\n", taroup, hanakop);

    return 0;
}