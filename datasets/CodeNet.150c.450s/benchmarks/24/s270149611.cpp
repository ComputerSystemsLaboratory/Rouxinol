#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <functional>
#include <array>

using namespace std;
using P = pair<int64_t, int>;

int main(){
    int64_t N, M;
    while(true){
        cin >> N >> M;
        if(N == 0 && M == 0) break;
        vector<P> pd(N);
        for(int i = 0; i < N; ++i){
            cin >> pd[i].second >> pd[i].first;
        }
        sort(pd.begin(), pd.end());
        for(int i = N-1; i >= 0; --i){
            if(pd[i].second <= M){
                M -= pd[i].second;
                pd[i].second = 0;
            } else {
                pd[i].second -= M;
                M = 0;
            }
        }
        int64_t sum = 0;
        for(int i = 0; i < N; ++i){
            sum += pd[i].first * pd[i].second;
        }
        cout << sum << endl;
    }
}
