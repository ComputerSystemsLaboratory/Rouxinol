/*
 * Author:  xioumu
 * Created Time:  2012/7/17 12:57:52
 * File Name: b.cpp
 * solve: b.cpp
 */
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string>
#include<map>
#include<set>
using namespace std;
const double esp = 1e-8;
const int maxn = 1000007;
typedef long long ll;
int n;
int a;
int v[maxn];
int next(int x){
    int h[7];
    int ma = 0, mi = 0;
    for(int i = 0; i < n; i++){
        h[i] = x % 10;
        x /= 10;
    }
    sort(h, h + n);
    for(int i = 0; i < n; i++)
        mi = mi * 10 + h[i];
    reverse(h, h + n);
    for(int i = 0; i < n; i++)
        ma = ma *10 + h[i];
    //printf("%d %d %d\n", ma, mi, ma - mi);
    return ma - mi;
}
int main(){
    while(scanf("%d%d", &a, &n) != EOF && (a || n)){
        memset(v, -1, sizeof(v));
        v[a] = 0;        
        int res = -1, b;
        do{
            b = next(a);
            if(v[b] == -1) v[b] = v[a] + 1;
            else {
                res = v[a] + 1;
                break;
            }
            a = b;
        }while(1);
        printf("%d %d %d\n", v[b], b, res - v[b]);
    }
    return 0;
}