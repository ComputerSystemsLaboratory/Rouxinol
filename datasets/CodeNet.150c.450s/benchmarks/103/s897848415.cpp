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

// vector の表示用デバッグ
template<class T>
void debug(const vector<T>& v){
    cout << "[debug]" << endl << "{";
    for(int i = 0 ; i < v.size() ; i++ )
        cout << (i? ", " : "") << v[i];
    cout << "}" << endl;
}

int first(int n){
    return ((1 << n) - 1);
}

// 次の組合せを返す (32bitのintを返す)
int nextSet(int x){
    int small, ripple, newSmall,ones;
    small = x & -x;
    ripple = x + small;
    newSmall = ripple & -ripple;
    ones = (( newSmall / small ) >> 1) - 1;
    return (ripple | ones);
}

// bit列に対応するvectorを返す 
// ( i 番目のbitが 1 => i 番目の要素を選んでいる, i 番目のbitが 0 => i番目の要素を選んでいない)
vector<int> setComb(int s, int n, vector<int> a){
    vector<int> c;
    for(int i=0 ; i < n ; i++ ){
        if( s & 1 ) c.push_back( a[i] );
        s >>= 1;
    }
    return c;
}

// {a[0], a[1], ... , a[n-1]} の n 個の要素から k 個選んだ組合せを出力
int main(){
	const int n = 10;
    int k, s;
    while( cin >> k >> s , k || s ){
        vector<int> a(n);
        int ans = 0;
        for(int i=0 ; i < n ; i++ ){
            a[i] = i;
        }
        
        int x = first(k);
        while( !(x & ~first(n) ) ){
            vector<int> c = setComb( x , n , a );
            // 組合せ c に対する操作
            int sum = 0;
            for(int i=0 ; i < c.size() ; i++ ) sum += c[i];
            if( sum == s ) ans++;
            x = nextSet( x );
        }
        cout << ans << endl;
    }
}