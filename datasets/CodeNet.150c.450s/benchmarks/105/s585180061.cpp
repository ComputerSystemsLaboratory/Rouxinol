#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int T, N;
    long long Abuf;
    vector<long long> A;
    string S;
    cin >> T;
    for(int itestcase=0; itestcase<T; itestcase++){
        cin >> N;
        A.clear();
        for(int i=0; i<N; i++){
            cin >> Abuf;
            A.push_back(Abuf);
        }
        cin >> S;
        vector<long long> DP;
        DP.push_back(0);
        for(int i=N-1; i>=0; i--){
            Abuf = A[i];
            for(long long v: DP)Abuf = min(Abuf, Abuf^v);
            if(S[i]=='0'){
                DP.push_back(Abuf);
            }else if(Abuf != 0LL){
                DP.clear();
                break;
            }
        }
        if(DP.empty()){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
            DP.clear();
        }
    } 
    return 0;
}