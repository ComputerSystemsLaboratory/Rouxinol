#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int f[N];
    int v;
    
    for (int i=0; i<N; i++) {
        f[i] = 0;
    }


    for (int x=1; x<=sqrt(N); x++){
        for (int y=1; y<=sqrt(N); y++) {
            for (int z=1; z<=sqrt(N); z++) {
                v = x*x + y*y + z*z + x*y + y*z + z*x;
                if (N >= v) {
                    f[v-1]++;
                }
            }
        }
    }

    for (int i=0; i<N; i++) {
        cout << f[i] << endl;
    }

    return 0;
}