#include <bits/stdc++.h>
using namespace std;
int main(void){
    std::deque<int> deqa;
    std::deque<int> deqb;
    int a,b,hit,blow;
    hit = 0;
    blow = 0;
    while (cin >> a) {
        int tmp = a;
        deqa.emplace_back(tmp);
        for (int i=0;i<3;i++) {
            cin >> a;
            deqa.emplace_back(a);
        }
        for (int j=0;j<4;j++) {
            cin >> b;
            deqb.emplace_back(b);
        }
        int a1 = deqa[0];
        int b1 = deqb[0];
        int a2 = deqa[1];
        int b2 = deqb[1];
        int a3 = deqa[2];
        int b3 = deqb[2];
        int a4 = deqa[3];
        int b4 = deqb[3];
        if (a1==b1) {
            hit++;
        } else if (b1==a2 || b1==a3 || b1==a4) {
            blow++;
        }
        if (a2==b2) {
            hit++;
        } else if (b2==a1 || b2==a3 || b2==a4) {
            blow++;
        }
        if (a3==b3) {
            hit++;
        } else if (b3==a1 || b3==a2 || b3==a4) {
            blow++;
        }
        if (a4==b4) {
            hit++;
        } else if (b4==a1 || b4==a2 || b4==a3) {
            blow++;
        }
        cout << hit << " " << blow << endl;
        
        deqa.clear();
        deqb.clear();
        hit = 0;
        blow = 0;
    }
}
