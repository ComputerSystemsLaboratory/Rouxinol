#include <iostream>
#include <algorithm>
using namespace std;

int ns[100];
int ms[100];
int n;
int m;

#define ABS(x) ((x) >= 0 ? (x) : (-x))

int sum(int arr[], int size) {
    int r=0;
    for(int i=0;i<size;i++) r+=arr[i];
    return r;
}

int main(void) {
    while(1) {
        cin >> n >> m;
        if (n==0 && m==0) {
            break;
        }
        for(int i=0; i<n; i++) {
            cin >> ns[i];
        }
        for(int i=0; i<m; i++) {
            cin >> ms[i];
        }
        sort(ns, ns+n);
        sort(ms, ms+m);
        int dif = sum(ns,n) - sum(ms,m);
        int result_n = -1;
        int result_m = -1;
        for(int in=0; in<n; in++) {
            for(int im=0; im<m; im++) {
                //cout << "[d:" << dif << " n:" << ns[in] << " m:" << ms[im] << " d:" << ns[in] - ms[im] << "]" << ((ns[in] - ms[im])*2 == dif) << endl;
                if ((ns[in] - ms[im])*2 == dif) {
                    if (result_n == -1 || (result_n + result_m > ns[in] + ms[im]) ) {
                        result_n = ns[in];
                        result_m = ms[im];
                    }
                }
            }
        }
        if (result_n == -1) {
            cout << -1 << endl;
        } else {
            cout << result_n << " " << result_m << endl;
        }
    }
    return 0;
}