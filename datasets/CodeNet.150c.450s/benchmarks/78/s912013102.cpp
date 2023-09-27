#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()
const int N = 1000000;

template<typename T> inline void chmin(T& t, T f){if(t > f)t = f;}

vector<int> mem1, mem2;

void calc(vector<int>& v, vector<int>& mem){
    mem.resize(N); iota(all(mem), 0);
    rep(i, N)for(auto j: v){
        if(i < j)break;
        chmin(mem[i], mem[i-j]+1);
    }
}

void init(){
    vector<int> num, odd;
    for(int i=1, x=1; x<N; ++i, x=i*(i+1)*(i+2)/6){
        num.push_back(x);
        if(x&1)odd.push_back(x);
    }
    calc(num, mem1);
    calc(odd, mem2);
}

int main(){
    init();
    int n;
    while(cin >> n, n)cout << mem1[n] << ' ' << mem2[n]<< '\n';
    return 0;
}