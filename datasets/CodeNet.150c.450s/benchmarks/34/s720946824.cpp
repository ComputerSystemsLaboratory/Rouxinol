#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int ans;
    while(1){
        cin >> n;
        if(n == 0)break;
        if(n <= 2){
            cout << 1 << endl;
            continue;
        }
        vector<int> ways(n+1);
        ways[1] = 1;
        ways[2] = 2;
        ways[3] = 4;
        for(int i = 4; i <= n; i++){
            ways[i] = ways[i-1] + ways[i-2] + ways[i-3];
        }
        if(ways[n] % 3650 == 0){
            ans = ways[n] / 3650;
        }else{
            ans = (ways[n] / 3650) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}