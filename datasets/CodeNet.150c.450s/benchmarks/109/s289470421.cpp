#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<climits>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
#define P pair<int, int>
const int INF = INT_MAX / 2;

int Inp(string str){
    stringstream ss(str);
    int ret = 0, n;
    char tmp;
    ss >>n >>tmp;
    ret += (n * 3600);
    ss >>n >>tmp;
    ret += (n * 60);
    ss >>n;
    ret += n;
    return ret;
}

int main(){
    int n;
    while(cin >>n && n){
        vector<P> v;
        REP(i, n){
            string str;
            cin >>str; v.push_back( P(Inp(str), 1) );
            cin >>str; v.push_back( P(Inp(str), 0) );
        }
        sort(v.begin(), v.end());

        int t = 0, ans = 0;
        REP(i, v.size()){
            int time = v[i].first;
            int io = v[i].second;
            if(io == 1){
                if(t == 0){
                    ans++;
                } else{
                    t--;
                }
            } else{
                t++;
            }
        }
        cout <<ans <<endl;
    }
    return 0;
}