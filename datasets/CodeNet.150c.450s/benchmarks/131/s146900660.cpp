#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];

int pow10(int n){
    int res = 1;
    for(int i = 0; i < n; i++) res *= 10;
    return res;
}

int main()
{
    while(true){
        int n, l;
        cin >> n >> l;
        if(n == 0 && l == 0) break;
        fill(a, a + pow10(l), 0);
        int i = 1;
        while(true){
            if(a[n]) break;
            a[n] = i;
            i++;
            int cmax[6], cmin[6];
            for(int j = 0; j < l; j++){
                cmax[j] = cmin[j] = n % 10;
                n /= 10;
            }
            sort(cmax, cmax + l, greater<int>());
            sort(cmin, cmin + l);
            n = 0;
            for(int j = 0; j < l; j++){
                n = n + pow10(l - 1 - j) * (cmax[j] - cmin[j]);
            }
        }
        cout << a[n] - 1 << " " << n << " " << i - a[n] << endl;
    }
}
