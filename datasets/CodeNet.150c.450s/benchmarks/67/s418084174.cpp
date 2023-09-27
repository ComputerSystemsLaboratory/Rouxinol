#include<iostream>
using namespace std;

int main() {
    int n,ans,m;
    cin >> n;
    while (n > 0) {
        ans = 0; 
        m = 2;
        while (1) {
            if (m % 2 == 0) {
                if (n / m < m / 2)break;
                if (n%m == m / 2)ans++;
            }
            else {
                if (n / m < m / 2 + 1)break;
                if (n%m == 0)ans++;
            }
            m++;
        }
        cout << ans << endl;
        cin >> n;
    }
    return 0;
}