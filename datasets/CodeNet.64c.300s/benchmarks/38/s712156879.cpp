#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int k=0; k<n; k++) {
        int a[10];
        for(int i=0; i<10; i++) cin >> a[i];
        int b=-1, c=-1;
        bool f = 0;
        for(int i=0; i<10; i++) {
            if(b<a[i]) {
                b = a[i];
            } else if(c<a[i]) {
                c = a[i];
            } else {
                f = 1;
                break;
            }
        }
        printf("%s\n", f ? "NO" : "YES");
    }

    return 0;
}