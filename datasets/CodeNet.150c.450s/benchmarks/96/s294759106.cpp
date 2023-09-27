#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(i=a; i<n; i++)
#define rep(i,n) REP(i,0,n)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define foreach(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); it++)

const char *keitai[] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

int main(){
    int T,i;
    string in;

    cin >> T;
    while( T-- ){
        cin >> in;

        int cnt = 0, num = -1;
        rep(i,in.length()){
            if( in[i] == '0' ){
                if( num != -1 ){
                    putchar(keitai[num][(cnt-1)%strlen(keitai[num])]);
                }
                cnt = 0, num = -1;
            }
            else{
                num = in[i] - '0';
                cnt++;
            }
        }
        puts("");
    }
    return 0;
}