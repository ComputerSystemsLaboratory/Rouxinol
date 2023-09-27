#include <cstdio>
#include <vector>

using namespace std;

long long a[200];
char s[201];

long long check(vector<long long>& v, long long x) {
    int i;
    
    for (i = 0; i < v.size(); i++) {
        if ((x ^ v[i]) < x) x ^= v[i];
    }
    
    return x;
}

bool solve() {
    int n, i;
    vector<long long> v;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) scanf("%lld", &a[i]);
    
    scanf("%s", s);
    
    for (i = n - 1; i >= 0; i--) {
        long long x = check(v, a[i]);
        
        if (s[i] == '0') {
            if (x != 0) v.push_back(x);
        } else {
            if (x != 0) return false;
        }
    }
    
    return true;
}

int main() {
    int t, i;
    
    scanf("%d", &t);
    
    for (i = 0; i < t; i++) {
        if (solve()) {
            puts("0");
        } else {
            puts("1");
        }
    }
    
    return 0;
}
