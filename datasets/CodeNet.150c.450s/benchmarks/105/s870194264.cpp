#include<bits/stdc++.h> 
using namespace std;
using i64 = int_fast64_t;
#define rep(i, N) for(int i = 0; i < N; i++)

int main(){   
    int T;
    cin >> T;
    while(T--){
        int N;
        vector<i64> A;
        string S;

        cin >> N;
        A.resize(N); 
        rep(i, N) cin >> A[i]; 
        cin >> S;

        reverse(A.begin(), A.end());
        reverse(S.begin(), S.end());

        vector<i64> st(1, 0);
        st.reserve(100000);
    
        rep(i, N){
            if(st.size() == 0) break;
            
            i64 x = A[i];
            for(const i64& v : st){
                x = min(x, x ^ v);
            }

            if(x != 0){
                if(S[i] == '1') st.clear();
                else st.emplace_back(x);
            } 
        }

        if(st.size() == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }                                                                                                                                                                                                                                                                                                       
}
