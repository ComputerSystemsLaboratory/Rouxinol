#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n, ans;
    while(cin >> n, n){
        ans = 0;
        range(i, 1, n){
            int sum = 0;
            range(j, i, n){
                sum+= j;
                if(sum == n) ans++;
            }
        }
        cout << ans << endl;
    }
}