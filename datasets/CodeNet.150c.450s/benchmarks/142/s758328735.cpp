#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> ar(N);
    for(int i = 0; i < N; i++) {
        cin >> ar[i];
        if(i > K-1) {
            if(ar[i] > ar[i - K]) {
                cout << "Yes"<<endl;
            } else {
                cout << "No" <<endl;
            }
        }
    }
    return 0;
}