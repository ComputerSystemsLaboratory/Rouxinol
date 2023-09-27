#include <iostream>
#include <algorithm>
using namespace std;

#define LIM 1000000
int all[LIM];
int odd[LIM];

int main()
{
    for (int i = 0; i < LIM; i++){
        all[i] = i;
        odd[i] = i;
    }
    for (int i = 0; i < LIM; i++){
        int x = i * (i + 1) * (i + 2) / 6;
        if (x > LIM) break;
        for (int j = x; j <= LIM; ++j){
            all[j] = min(all[j], all[j-x] + 1);
        }
        if (x % 2 == 1){
            for (int j = x; j <= LIM; ++j){
                odd[j] = min(odd[j], odd[j-x] + 1);
            }
        }
    }

    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << all[n] << " " << odd[n] << endl;
    }

    return 0;
}