#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


const int Max=10000000;
bool prime[Max];
int main(void){
    int in;
    for(int i=0;i<Max;i++)prime[i]=true;
    prime[1]=false;
    for(int i=2;i<Max;i++){
        if(prime[i]){
            for(int s=i*2;s<=Max;s+=i)prime[s]=false;
        }
    }
    while(cin>>in){
        int cnt=0;
        for(int i=1;i<=in;i++){
            if(prime[i])cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}