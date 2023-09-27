#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <functional>
#include <array>

using namespace std;

int main(){
    while(true){
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if(m == 0 && nmin == 0 && nmax == 0) break;
        --nmin, --nmax;

        vector<int> P(m);
        for(int i = 0; i < m; ++i){
            cin >> P[i];
        }
        int gyap = 0;
        int ans = 0;
        for(int i = nmin; i <= nmax; ++i){
            if(gyap <= P[i] - P[i+1]){
                gyap = P[i] - P[i+1];
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
}
