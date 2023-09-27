#include<bits/stdc++.h>

int main(){
    using namespace std;
    unsigned long T;
    cin >> T;
    for(unsigned long iter{0}; iter < T; ++iter){
        unsigned long N;
        cin >> N;
        vector<unsigned long> A(N);
        for(auto&& i : A)cin >> i;
        string S;
        cin >> S;
        reverse(begin(A), end(A));
        reverse(begin(S), end(S));
        set<unsigned long, greater<>> st;
        cout << [&]{for(unsigned long i{0}; i < N; ++i){
            if(S[i] == '0'){
                unsigned long tmp{A[i]};
                for(const auto& j : st){
                    if(!tmp)break;
                    if(__builtin_clzl(tmp) > __builtin_clzl(j))continue;
                    if(__builtin_clzl(tmp) < __builtin_clzl(j))break;
                    tmp ^= j;
                }
                if(tmp)st.insert(tmp);
            }else{
                unsigned long tmp{A[i]};
                for(const auto& j : st){
                    if(!tmp)break;
                    if(__builtin_clzl(tmp) > __builtin_clzl(j))continue;
                    if(__builtin_clzl(tmp) < __builtin_clzl(j))break;
                    tmp ^= j;
                }
                if(tmp)return 1;
            }
        }return 0;}() << endl;
    }
    return 0;
}