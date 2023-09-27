#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <map>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int a, L;
int nextnum(int n){
    stringstream ss;
    ss<<n;
    string s1 = ss.str();
    while(s1.size() < L) s1 += '0';
    sort(s1.begin(), s1.end());
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return atoi(s2.c_str()) - atoi(s1.c_str());
}

int main(){
    while(cin>>a>>L && (a || L)){
        map<int, int> ans;
        int res = -1;
        int res2 = 0;
        int res3;
        int cnt = 0;
        while(true){
            if(ans.count(a)){
                res = ans[a];
                res2 = a;
                res3 = cnt - res;
                break;
            }else{
                ans[a] = cnt;
            }
            a = nextnum(a);
            cnt ++;
        }
        printf("%d %d %d\n", res, res2, res3);
    }
    return 0;
}