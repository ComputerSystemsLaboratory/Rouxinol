/*
 * Author:  xioumu
 * Created Time:  2012/7/17 12:42:40
 * File Name: a.cpp
 * solve: a.cpp
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
const int maxn = 1007;
typedef long long ll;
int n;
int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int y, m, d;
        int num = 0;
        scanf("%d%d%d", &y, &m, &d);
        num = (y - 1) * 195 + (y - 1) / 3 * 5;
        num += (m - 1) * 20;
        if(y % 3 != 0)
            num -= (m - 1) / 2;
        num += d;
        printf("%d\n", 196471 - num);
    }
    return 0;
}