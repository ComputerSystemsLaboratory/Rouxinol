#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {

    int M;
    cin >> M;
    while(M--) {
        int ans = 0;
        map< string, bool > used;
        string s; cin >> s;

        used[s] = true;
        ans++;
        for(int i = 1; i < s.size(); i++) {
            string front = s.substr(0, i), back = s.substr(i, s.size() - i);
            string rfront = front;
            reverse(rfront.begin(), rfront.end());
            string rback = back;
            reverse(rback.begin(), rback.end());
            if(!used[back + front]) {
                used[back + front] = true;
                ans++;
            }
            if(!used[front + rback]) {
                used[front + rback] = true;
                ans++;
            }
            if(!used[rfront + back]) {
                used[rfront + back] = true;
                ans++;
            }
            if(!used[rfront + rback]) {
                used[rfront + rback] = true;
                ans++;
            }
            if(!used[rback + front]) {
                used[rback + front] = true;
                ans++;
            }
            if(!used[back + rfront]) {
                used[back + rfront] = true;
                ans++;
            }
            if(!used[rback + rfront]) {
                used[rback + rfront] = true;
                ans++;
            }
        }
        cout << ans << endl;
    }
}