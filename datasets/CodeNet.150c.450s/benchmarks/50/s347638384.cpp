#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
#include <map>
#include <set>
const int mod = 1e9 + 7;
const int INF = 1 << 20;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main()
{
    while(true){
        int n;
        int ans = 0;
        cin >> n; 
        if(n == 0){
            break;
        }
        int c = 1000 - n;
        if(c >= 500){
            c -= 500;
            ans++;
        }
        if(c >= 100){
            ans += c/100;
            c %= 100;
        }
        if(c >= 50){
            ans += c/50;
            c %= 50;
        }
        if(c >= 10){
            ans += c/10;
            c %= 10;
        }
        if(c >= 5){
            ans += c/5;
            c %= 5;
        }
        ans += c;
        cout << ans << endl;
    }
}
