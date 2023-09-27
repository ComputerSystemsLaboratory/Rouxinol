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
    int64_t N, M, P;
    while(true){
        cin >> N >> M >> P;
        if(N == 0 && M == 0 && P == 0) break;
        vector<int64_t> vec(N);
        int64_t sum = 0;
        for(int i = 0; i < N; ++i){
            cin >> vec[i];
            sum += vec[i];
        }
        int64_t po = sum * (100 - P);
        if(vec[M-1] == 0){
            cout << 0 << endl;
        } else {
            cout << po / vec[M-1] << endl;
        }
    }
}
