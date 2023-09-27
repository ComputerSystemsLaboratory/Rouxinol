//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long sut = 0;
const int typeNum = 26;
vector<vector<long long> > table;

long long last(long long d, long long i) {
    return table[i][d];
};

void solve(long long D, std::vector<long long> c, std::vector<std::vector<long long> > s, std::vector<long long> t){
    // make table
    for (int i=0;i<typeNum;++i) {
        table.push_back(vector<long long>(t.size()));

        for (int j=0;j<t.size(); ++j) {
            table[i][j] = -1;
        }
    }
 

    for (int i=0; i<t.size(); ++i) {
        vector<long long> &target = table[t[i] - 1];
        for (int j=i; j<target.size() ;++j) {
            target[j] = i;
        }
    }

    // for (int i=0; i<table.size(); ++i) {
    //     cout << i << '\t';
    //     for (int j=0; j<table[i].size(); ++j) {
    //         cout << table[i][j] << ',';
    //     }
    //     cout << endl;
    // }

    for (int d = 0; d < D; ++d) {
        sut += s[d][t[d] - 1];

        // minus
        for (int i=0;i<typeNum;++i) {
            sut -= c[i] * (d - last(d, i));
        }
        cout << sut << endl;
    }
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long D;
    scanf("%lld",&D);
    std::vector<long long> c(26);
    for(int i = 0 ; i < 26 ; i++){
        scanf("%lld",&c[i]);
    }
    std::vector<std::vector<long long> > s(D, std::vector<long long>(26));
    for(int i = 0 ; i < D ; i++){
        for(int j = 0 ; j < 26 ; j++){
            scanf("%lld",&s[i][j]);
        }
    }
    std::vector<long long> t(D);
    for(int i = 0 ; i < D ; i++){
        scanf("%lld",&t[i]);
    }
    solve(D, std::move(c), std::move(s), std::move(t));
    return 0;
}
