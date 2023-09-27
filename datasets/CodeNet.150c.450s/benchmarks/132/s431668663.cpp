#include<iostream>
#include<vector>

using namespace std;

int main(){
    while (1){
        int n, p;
        cin >> n >> p;
        if (n == 0){
            break;
        }

        vector<int> player(n);

        int stone = p;
        bool flag = false;
        int ans = 0;
        while (1){
            for (int i = 0; i < n; i++){
                if (stone > 0){
                    --stone;
                    ++player[i];
                }
                else{
                    stone = player[i];
                    player[i] = 0;
                }

                if (player[i] == p){
                    flag = true;
                    ans = i;
                    break;
                }
            }
            if (flag) break;
        }

        cout << ans << endl;
    }

    return 0;
}