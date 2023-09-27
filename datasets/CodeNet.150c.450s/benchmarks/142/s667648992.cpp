
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <iomanip>  // std::setprecision()
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pai 3.14159265358979323846
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main() {
    int n,k;
    cin >> n >> k;
    vector <ll> a(n+1);
    for(ll i =1;i <=n ;i++) {
        cin >> a[i];
    }
    // vector <ll> b(n+1);
    // ll tmp = 1;
    // for (ll i = 1; i < k; i++) {
    //     tmp *= a[i];
    // }

    // for (ll i = k; i<= n; i++) {
    //     tmp *= a[i];
    //     b[i] = tmp;
    //     tmp /= a[i-k+1];
    // }
    for (ll i = k+1; i<= n; i++) {
        if (a[i] > a[i-k]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}