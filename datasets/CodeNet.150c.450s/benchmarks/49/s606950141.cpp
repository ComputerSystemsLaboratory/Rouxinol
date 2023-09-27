#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    while(1){
        int n; cin >> n;
        if(n == 0) break;

        int max_s = 0, min_s = 1000, sum = 0;
        for(int i = 0; i < n; i++){
            int s; cin >> s;
            
            max_s = max(max_s, s);
            min_s = min(min_s, s);
            sum  += s;
        }

        int res = (sum - min_s - max_s) / (n - 2);
        cout << res << endl;
    }

    return 0;
}