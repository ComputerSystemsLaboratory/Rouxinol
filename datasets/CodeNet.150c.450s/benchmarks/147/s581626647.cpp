#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , q;
    cin >> n;
    vector<int> v(10001,0);

        for (int i = 1; i <= 100; i++) {
            for (int j = 1; j <= 100; j++) {
                for (int k = 1; k <= 100; k++) {
                  q = i * i + j * j + k * k + i * j + j * k + i * k;
                    if (q < 10001) {
                        v[q]++;
                    }
                }

            }
        }
        
 for(int i = 0; i <n; i++){
     cout<<v[i+1]<<endl;
 }


    return 0;
}


