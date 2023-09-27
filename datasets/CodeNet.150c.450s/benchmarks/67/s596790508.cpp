#include <iostream>
using namespace std;

int main(void) {

    while (1) {
        int N; cin >> N;
        if (N == 0) break;

        int num, cnt = 0;
        for (int i = 1; i <= N-1; i++) {     // ??????
            for (int j = i+1; j <= N; j++) { // ??????
                num = j*(j+1)/2 - (i-1)*i/2;
                if (N == num) cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}