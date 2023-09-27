#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    while(cin >> N, N){
        vector<int> vec(N);
        for(auto &v: vec)
            cin >> v;
        sort(vec.begin(), vec.end());
        int diff = 1e7;
        for(int i=1; i<N; i++){
            diff = min(diff, vec[i]-vec[i-1]);
        }
        cout << diff << endl;
    }
    return 0;
}