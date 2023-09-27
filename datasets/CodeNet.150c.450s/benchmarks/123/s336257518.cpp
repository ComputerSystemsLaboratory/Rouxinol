#include<iostream>
#include<cmath>

using namespace std;

int main() {

        int n, cnt = 0;
        cin >> n;
        long N;
        while (cin >> N) {
                long sqr = sqrt(N);
                if (sqr < 2) {
                        cnt++;
                        continue;
                }
                bool flag = true;
                for (long j = 2; j <= sqr; j++) {
                        if ((N % j) == 0) {
                                flag = false;
                                break;
                        }
                }
                if (flag) {
                        cnt++;
                }
        }

        cout << cnt << endl;

        return 0;

}