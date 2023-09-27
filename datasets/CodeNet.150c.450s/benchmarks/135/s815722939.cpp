#include<bits/stdc++.h>

int main(){
    using namespace std;
    unsigned long N, M;
    while((cin >> N >> M) && N && M){
        deque<unsigned long> A(N), B(M);
        for(auto& i : A)cin >> i;
        for(auto& i : B)cin >> i;
        A.push_front(0);
        B.push_front(0);
        partial_sum(A.begin(), A.end(), A.begin());
        partial_sum(B.begin(), B.end(), B.begin());
        vector<unsigned long> T(1 + A.back() + B.back());
        for(const auto i : A)
            for(const auto j : B)++T[i + j];
        cout << accumulate(T.begin(), T.end(), 0UL, [](auto a, auto b){return a + b * (b - 1) / 2;}) << endl;
    }
}
