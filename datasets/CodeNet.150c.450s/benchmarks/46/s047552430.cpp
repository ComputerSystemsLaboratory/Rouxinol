/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B????§£????????????
*/

#include <iostream>
using namespace std;
int main() {
    int n,x;
    int ans;
    while(cin >> n >> x,(n!=0)||(x!=0)){
        ans = 0;
        for(int a = 1;a <= n;a++){
            for(int b = a+1;b <= n;b++){
                for(int c = b+1;c<= n;c++){
                    if( a+b+c == x){
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}