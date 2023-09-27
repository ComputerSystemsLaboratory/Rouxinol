#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
    for(;;) {
        int n;
        cin >> n;
        if(n == 0) break;
        int cnt = 0;
        bool st = false;
        bool left = false;
        bool right = false;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if(s == "lu") {
                left = true;
            } else if(s == "ru") {
                right = true;
            } else if(s == "ld") {
                left = false;
            } else if(s == "rd") {
                right = false;
            }
            if(left == !st && right == !st) {
                st = !st;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

