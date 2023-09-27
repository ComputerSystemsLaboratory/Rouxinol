#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void) {
    int i, j, k, l, N;
    while(cin >> N) {
        int ans = 0;
        for(i = 0; i < 10; i++) {
            for(j = 0; j < 10; j++) {
                for(k = 0; k < 10; k++) {
                    for(l = 0; l < 10; l++) {
                        if(i + j + k + l == N) {
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}