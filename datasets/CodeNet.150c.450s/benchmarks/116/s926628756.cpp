#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n||m){
        int ans = 0, sum = 0;;
        int inp;
        queue<int> rec;
        rep(i, n){
            if(i < m){
                cin >> inp;
                sum+= inp;
                rec.push(inp);
            }else{
                cin >> inp;
                sum+= inp - rec.front();
                rec.pop();
                rec.push(inp);
            }
            if(ans < sum && i >= m)
                ans = sum;
        }
        cout << ans << endl;
    }
}