#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int main(){

    int n,s;

    vector<int> num(10);

    for(int i = 0;i < 10;i++){
        num[i] = i;
    }

    while(cin >> n >> s){

        if(n == 0 && s == 0){
            break;
        }

        int ans = 0;
        
        for(int i = 0 ; i < (1 << num.size()) ; i++){
            int sum = 0;
            int bit_count = 0;
            for(int j = 0 ; j < num.size() ; j++){
                if( (i >> j) & 1){
                    sum += num[j];
                    bit_count++;
                    /*if(bit_count == n){
                        break;
                    }*/
                }
            }
            if(sum == s && bit_count == n){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
