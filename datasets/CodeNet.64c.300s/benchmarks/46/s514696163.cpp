#include <iostream>
using namespace std;

bool is_prime(int n) {
    if(n < 2) return false;
    else if(n == 2) return true;

    if(n % 2 == 0) return 0;
    for(int i=3; i*i<=n; i+=2) if(n % i == 0) return false;
    return true;
}

void solve(int a,int d,int n) {
    int cnt = 0;
    for(int k=0; ; k++) {
        if(is_prime(a + k*d)) ++cnt;
        if(cnt == n) {
            cout << a + k*d << "\n";
            return ;
        }
    }
    return ;
}

int main() {
    for(int a,d,n; cin>>a>>d>>n && a; ) solve(a,d,n);
    return 0;
}