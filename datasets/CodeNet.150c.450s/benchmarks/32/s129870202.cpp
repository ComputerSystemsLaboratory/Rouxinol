#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    while(true){
        int m, n_min, n_max;
        cin >> m >> n_min >> n_max;
        if(m == 0) break;
        vector<int> p(m, 0);

        for(int i = 0; i < m; ++i)
            cin >> p[i];

        int gap = INT_MIN;
        int ans = -1;
        for(int i = n_min-1; i < n_max; ++i){
            int gap_ = p[i] - p[i+1];
            if(gap <= gap_){
                gap = gap_;
                ans = i+1;
            }
        }

        cout << ans << endl;
    }

    return EXIT_SUCCESS;
}