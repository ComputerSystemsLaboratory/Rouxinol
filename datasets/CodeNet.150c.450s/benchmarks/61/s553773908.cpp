#include<iostream>
#include<vector>

using namespace std;

int main() {
    while(1) {
        int n, a, b, c, x;
        cin >> n >> a >> b >> c >> x;
        if (n == 0) break;
        vector<int> y;
        for (int i = 0; i < n; ++i) {
            int yi;
            cin >> yi;
            y.push_back(yi);
        }

        int i;
        int tmp = 0;
        for (i = 0; i < 10001; ++i) {
            if (x == y[tmp]){
                tmp++;
                if(tmp == n) break;
            }
            x = (a * x + b) % c;
        }

        cout << (i == 10001 ? -1 : i) << endl;
    }
}