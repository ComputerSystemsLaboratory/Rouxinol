#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int n,p;
    while(cin >> n >> p && n){
        int const P = p;
        int ans = -1;
        int k = 0;
        int have[55] = {};
        int cup = p;
        while(1){
            if(cup){
                have[k]++;
                cup--;
                if(cup == 0){
                    if(have[k] == P){
                        ans = k;
                        goto END;
                    }
                }
            } else {
                cup += have[k];
                have[k] = 0;
            }
            k++;
            k %= n;
        }
    END:;
        cout << ans << endl;
    }
}