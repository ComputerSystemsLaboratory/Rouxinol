#include <cstdio>
#include <cstdint>
#include <map>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cstddef>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <tuple>
#include <utility>
#include <math.h>
#include <stack>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
*/

const long long mod = 1e9+7;

void chmod(long long &M){
    if(M >= mod) M %= mod;
    else if(M < 0){
        M += (abs(M)/mod + 1)*mod;
        M %= mod;
    }
}

long long modpow(long long x, long long n){
    if(n==0) return 1;
    long long res=modpow(x, n/2);

    if(n%2==0) return res*res%mod;
    else return res*res%mod*x%mod;
}

int getl(int i, int N) { return i==0? N-1:i-1; };
int getr(int i, int N) { return i==N-1? 0:i+1; };



/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */

int main() {
    char str[20200];
    scanf("%s", str);
    
    std::stack<int> st1;
    std::stack<std::pair<int, int>> st2;

    int sum = 0;
    
    int i=0;
    while(true) {
        if(str[i] == '\0') { break; }
        char ch = str[i];

        if(ch == '\\') {
            st1.push(i);
        }
        else if(ch == '/' && st1.size()>0) {
            int j = st1.top();
            st1.pop();
            sum += i-j;
            int a = i-j;
            while(st2.size()>0 && st2.top().first > j){
                a += st2.top().second;
                st2.pop();
            }
            st2.push(std::make_pair(j, a));
        }

        i++;
    }

    std::vector<int> ans;
    while(st2.size()>0) { ans.push_back(st2.top().second); st2.pop(); }
    std::reverse(ans.begin(), ans.end());
    printf("%d\n", sum);
    printf("%d", (int)ans.size());
    for(int i=0; i<ans.size(); ++i){
        printf(" %d", ans.at(i));
    }
    printf("\n");

    return 0;
}

