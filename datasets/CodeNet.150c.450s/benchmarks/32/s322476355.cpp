#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int M, Nmin, Nmax, P[200];

int main(){
    while(1){
        cin >> M >> Nmin >> Nmax;
        if (M == 0 && Nmin == 0 && Nmax == 0)
            break;

        for (int i = 0; i < M; ++i)
            cin >> P[i];

        int idx = Nmin;
        for (int i = Nmin; i <= Nmax; ++i) {
            if (P[i-1]-P[i] >= P[idx-1] - P[idx]) {
                idx = i;
            }
        }

        cout << idx << endl;
    }
    return 0;
}

