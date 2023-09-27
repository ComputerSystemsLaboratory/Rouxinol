#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, nmin, nmax;
    while(cin >> m >> nmin >> nmax && m > 0 || nmin > 0 || nmax > 0){
        vector<int> a(m);
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        int ans = 0;
        int tmp;
        for(int i = nmin; i <= nmax; i++){
            if(a[i - 1] - a[i] >= ans){
                ans = a[i - 1] - a[i];
                tmp = i;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}

