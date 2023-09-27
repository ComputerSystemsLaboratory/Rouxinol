#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <numeric>
#include <ctime>
using namespace std;

// n の最大値
const int MAX_N = 10;
// used[i] := v[i] を選んだかどうか
bool used[MAX_N];
int s, k, ans;

// v の先頭 n 個の要素 から k 個選ぶ組合せの列挙
template<class T>
void comb(const vector<T>& v, vector<T>& c, int n, int k, int pos = 0, int last = -1){
    // 初期化
    if( pos == 0 ) fill(used, used+MAX_N, false);
    
    if( pos == k ){
        // 組合せ c に対する操作
        int sum = 0;
        for(int i=0 ; i < c.size() ; i++ ) sum += c[i];
        if( s == sum ) ans++;
        return ;
    }
    for(int i = last+1 ; i < n ; i++ ){
        if( !used[i] ){
            c.push_back( v[i] );
            used[i] = true;
            comb( v , c , n , k , pos+1 , i );
            c.pop_back();
            used[i] = false;
        }
    }
}

int main(){
    while( cin >> k >> s , k || s ){
        ans = 0;
        vector<int> v(MAX_N), c;
        for(int i=0 ; i < MAX_N ; i++ ) v[i] = i;
        comb( v , c , MAX_N , k );
        cout << ans << endl;
    }
}