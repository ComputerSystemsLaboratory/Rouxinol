#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long sum = 0;
    map<long long, long long> T;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        sum += a;
        if(T.find(a) == T.end()) T[a] = 1;
        else T[a]++;
    }
    long long q;
    cin >> q;

    vector<long long> ans;
    for(long long i = 0; i < q; i++){
        long long b, c;
        cin >> b >> c;
        if(T.find(b) == T.end()){
            ans.push_back(sum);
            continue;
        }

        long long cnt = T[b];
        T[b] = 0;
        if(T.find(c) == T.end()) T[c] = cnt;
        else T[c] += cnt;

        sum -= b * cnt;
        sum += c * cnt;
        ans.push_back(sum);
    }

    for(auto v : ans) printf("%lld\n", v);

    return 0;
}