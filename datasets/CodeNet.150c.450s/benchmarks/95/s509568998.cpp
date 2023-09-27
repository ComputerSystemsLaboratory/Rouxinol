#include <bits/stdc++.h>

int main() {
    int n;
    while(std::cin >> n, n != 0) {
        std::string step;

        bool last = false; //false is floor
        bool left = false, right = false;
        int cnt = 0;
        for(int i=0; i<n; ++i) {
            std::cin >> step;

            if(step == "lu") {
                left = true;
            } else if(step == "ru") {
                right = true;
            } else if(step == "ld") {
                left = false;
            } else if(step == "rd") {
                right = false;
            }

            if(!last && left && right) {
                last = true;
                ++cnt;
            } else if(last && !left && !right) {
                last = false;
                ++cnt;
            }
        }
        std::cout << cnt << std::endl;
    }
}
