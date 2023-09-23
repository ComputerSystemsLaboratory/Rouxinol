#include<iostream>
#include<math.h>

using namespace std;

long gcd(long n, long m) {
    if (n < m)swap(n, m);
    if (n == m || m == 0)return n;
    return gcd(m, n % m);
}

long pri(){
    long ans = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        bool flag = false;
        cin >> m;
        for(int j = 2; j <= sqrt(m); j++){
            if(m % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag) ans++;
    }
    return ans;
}

int main() {
    cout << pri() << endl;
}
