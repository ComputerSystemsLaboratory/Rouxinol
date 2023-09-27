#include <iostream>
using namespace std;

#include <vector>
#include <algorithm> // sort
#include <map> // pair

int main(void){
    
    while(1){
        int N;
        long long M;
        cin >> N >> M;
        vector<pair<int,int> > DP(N);
        int result=0;
        if (N==0) break;
        for(int i=0; i<N; i++){
            cin >> DP[i].second >> DP[i].first;
        }
        sort(DP.begin(), DP.end());
        for(int i=N-1; i>=0; i--){
            if (M >= DP[i].second) {
                M -= DP[i].second;
            } else {
                result += (DP[i].second - M) * DP[i].first;
                M = 0;
            }
        }
        cout << result << endl;
    }
    
    
}