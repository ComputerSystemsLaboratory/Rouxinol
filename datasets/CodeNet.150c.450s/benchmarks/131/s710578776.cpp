#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main (void) {

    do {
        int a, l;
        cin >> a >> l;
        if (a == 0 && l ==0) { break; }

        vector<int> log_a;
        log_a.push_back(a);
        bool isEnd = false;
        int loop_cnt = 1;

        do {
            int as[l];
            for (int i=0; i<l; i++) {
                as[i] = (a == 0) ? 0 : a % 10;
                a = a / 10;
            }

            sort(as, as+l);
            int maxa=0, mina=0, newa;
            for (int j=0; j<l; j++) {
                mina += as[j] * pow(10.0, (l-1-j));
                maxa += as[j] * pow(10.0, j);
            }

            a = maxa - mina;

            for (int i=0; i<loop_cnt; i++) {
                if (log_a[i] == a) {
                    isEnd = true;
                    log_a.push_back(a);
                    cout << i << ' ' << log_a[loop_cnt] << ' ' << loop_cnt-i << endl;
                    break;
                }
            }

            log_a.push_back(a);
            loop_cnt++;
        } while (!isEnd);



    } while (true);

    return 0;
}