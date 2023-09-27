#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, M;
    int tmp;
    for(;;){
        cin >> N >> M;
        if( N == 0) break;
        vector<int> harr(N+1), warr(M+1);
        int ans=0;
        harr[0]=0; warr[0]=0;
        for(int i=1 ; i< N+1; i++){
            cin >> tmp;
            harr[i] = harr[i-1] + tmp;
        }
        for(int i=1; i< M+1; i++){
            cin >> tmp;
            warr[i] = warr[i-1] + tmp;
        }
        vector<int> count(max(harr[N],warr[M]) + 1,0);
        for(int i=0; i< N; i++){
            for(int j=i+1; j < N+1 ; j++){
                count[harr[j] - harr[i]]++;
            }
        }
        for(int i=0; i< M; i++){
            for(int j=i+1; j< M+1 ; j++){
                ans += count[warr[j] - warr[i]];
            }
        }
        cout << ans << endl;
    }
    return 0;
}

