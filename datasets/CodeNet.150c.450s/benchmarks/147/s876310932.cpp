#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> f(60000);
    for(int x=1; x<100; x++){
        for(int y=1; y<100; y++){
            for(int z=1; z<100; z++){
                f[x*x + y*y + z*z + x*y + y*z + z*x] += 1;
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout << f[i] << endl;
    }
    return 0;
}