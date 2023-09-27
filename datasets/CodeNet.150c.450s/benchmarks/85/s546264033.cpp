#include <stack>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <limits>
using namespace std;
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}
int mod = 1000000000 + 7;
vector<int> v;
class Calc
{
    // 宣言
    long long a;

    public:
        // 素因数分解
        void decompositPrime(long long a);
};

/*
 * 素因数分解
 */
void Calc::decompositPrime(long long n)
{
    // 割る数の初期値
    a = 2;
    // √n ≧ a ( n ≧ a * a ) の間ループ処理
    while (n >= a * a) {
        // a で割り切れたら、a は素因数
        // そして、割られる数を a で割る
        // a で割り切れなかったら、 a を 1 増加させる
        if (n % a == 0) {
            //printf("%d * ", a);
             v.push_back(a);
            n /= a;
        } else {
            a++;
        }
    }
    // 最後に残った n は素因数
    v.push_back(n);
    //printf("%d\n", n);
}

int main(){
    //std::stack<int> stack;
    int n;
    cin >> n;
    long ans = 0;
    vector<int> a(n+1);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> a[i+1];
    }
    long mat[n+1][n+1];
    for(int i = 1; i <= n; i++){
        mat[i][i] = 0;
    }
    for(int L = 2; L <= n; L++){
        for(int i = 1; i <= n-L+1; i++){
            int j = i+L-1;
            mat[i][j] = numeric_limits<long>::max();
            for(int k = i; k < j; k++){
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k+1][j] + a[i-1]*a[k]*a[j]);
            }
        }
    }
    cout << mat[1][n] << endl;
    return 0;
}




