#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    string f[100];
    // bool lrOnStep[2] = {false};
    bool up = true;
    int state = 0;

    while(true) {
        state = 0;
        up = true;
        int ans = 0;
        
        cin >> N;
        if(N==0) {
            break;
        }

        for(int n = 0; n < N; n++) {
            cin >> f[n];
        }

        for(int n = 0; n < N; n++) {
            if(f[n] == "lu" || f[n] == "ru") {
                state++;
            } else {
                state--;
            }
            if(up) {
                if(state == 2) {
                    up = false;
                    ans++;
                }
            } else {
                if(state == 0) {
                    up = true;
                    ans++;
                }
            }

            // if(f[n] == "lu") {
            //     if(lrOnStep[1] && flag) {
            //         ans++;
            //         flag = false;
            //     }
            // } else if(f[n] == "ru") {
            //     if(lrOnStep[0] && flag) {
            //         ans++;
            //         flag = false;
            //     }
            // } else if(f[n] == "ld") {
            //
            // } else if(f[n] == "rd") {
            // }
        }
        cout << ans << endl;
    }


    return 0;
}

