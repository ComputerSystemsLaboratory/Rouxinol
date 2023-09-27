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
#define mp std::make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const int INF = 1001001001;

// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

const std::pair<char,int> TABLE[4] = {
    mp('m', 1000), mp('c', 100), mp('x', 10), mp('i', 1)
};

int toInt(const std::string& s){
    int res = 0, pos;

    REP(i, 4){
        if(pos = s.find(TABLE[i].first), pos != std::string::npos){
            if(pos - 1 >= 0 && std::isdigit(s[pos-1])){
                res += (s[pos-1] - '0') * TABLE[i].second;
            }else{
                res += TABLE[i].second;
            }
        }
    }

    return res;
}

std::string toMCXI(int n){
    std::string res = "";

    REP(i, 4){
        if(n / TABLE[i].second > 0){
            if(n / TABLE[i].second > 1){
                res += (n / TABLE[i].second + '0');
            }
            res += TABLE[i].first;
            n %= TABLE[i].second;
        }
    }

    return res;
}

int main(){
    int N;
    std::cin >> N;

    REP(_, N){
        std::string S, T;
        std::cin >> S >> T;
        
        std::cout << toMCXI(toInt(S) + toInt(T)) << std::endl;
    }
}