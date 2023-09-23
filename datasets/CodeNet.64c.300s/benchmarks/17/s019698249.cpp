#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int x,y,s;
    while(cin>>x>>y>>s && x) {
        int ans = -1;
        for(int a=1; a<s; a++) {
            for(int b=1; ; b++) {
                int p = a * (100+x) / 100 + b * (100+x) / 100; // zeikomi
                if(p > s) break;
                if(p == s) {
                    ans = max(ans, a*(100+y)/100 + b*(100+y)/100);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}