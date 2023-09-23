#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)

const int INF = 1 << 24;

typedef unsigned long long ull;
typedef long long ll;

int N, a[110];

std::vector<char> _q;

template <class T>
void print(const std::vector<T>& q){
    for(auto i : q){
        printf("%c ", i);
    }
    puts("");
}

ull dp[110][30];
bool isMade[110][30];

ull rec(int index, int sum){
    if(index == N && sum == a[N]){return 1;}

    if(index >= N){return 0;}
    if(0 <= sum && sum <= 20);
    else{return 0;}

    if(isMade[index][sum]){
        return dp[index][sum];
    }

    ull res = 0;
    //_q.push_back('+');
    res += rec(index+1, sum + a[index]);
    //_q.erase(_q.end() - 1);
    //_q.push_back('-');
    res += rec(index+1, sum - a[index]);
    //_q.erase(_q.end() - 1);

    isMade[index][sum] = true;
    return dp[index][sum] = res;
}

int main(){
    std::cin >> N;

    REP(i, N){
        std::cin >> a[i];
    }

    REP(i, 110){
        REP(j, 30){
            isMade[i][j] = false;
            dp[i][j] = 0;
        }
    }

    std::cout << rec(1, a[0]) << std::endl;
}