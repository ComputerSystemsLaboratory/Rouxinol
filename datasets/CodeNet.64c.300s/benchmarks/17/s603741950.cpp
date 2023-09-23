#include <iostream>

using namespace std;

#define TAX(a, t) (int) (a*(100+t)/100)

int tax_sum(int a, int b, int t) {
    return TAX(a,t) + TAX(b,t);
}

int main() {
    int x, y, s;
    while (cin >> x >> y >> s) {
        if (x == 0) {
            break;
        }
        int ans = 0;
        for (int i = 1; i < s; i++) {
            for (int j = i; j < s; j++) {
                if (tax_sum(i,j,x) == s) {
                    ans = max(ans, tax_sum(i,j,y));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}