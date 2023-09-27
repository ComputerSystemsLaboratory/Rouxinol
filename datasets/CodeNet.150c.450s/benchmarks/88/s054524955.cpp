#include <iostream>
using namespace std;

int main() {
    int h, w;

    while(1) {
        cin >> h >> w;
        if(h + w == 0) break;

        int temp = 150*150+150*150;
        int ans_h, ans_w;
        for(int i = 1; i <= 150; i++) {
            for(int j = i+1; j <= 150; j++) {
                if(temp > i*i+j*j && h*h+w*w < i*i+j*j) {
                    ans_h = i;
                    ans_w = j;
                    temp = i*i+j*j;
                    //cout << i << ' ' << j << endl;
                }
                else if(temp == i*i+j*j && temp == h*h+w*w) {
                    if(h < i && ans_h > i) {
                        ans_h = i;
                        ans_w = j;
                        temp = i*i+j*j;
                        //cout << i << ' ' << j << endl;
                    }
                }
                else if(temp == i*i+j*j && ans_h > i) {
                    ans_h = i;
                    ans_w = j;
                    temp = i*i+j*j;
                    //cout << i << ' ' << j << endl;
                }
                else if(i*i+j*j == h*h+w*w && h < i) {
                    ans_h = i;
                    ans_w = j;
                    temp = i*i+j*j;
                    //cout << i << ' ' << j << endl;
                }
            }
        }
        cout << ans_h << ' ' << ans_w << endl;
    }
    return 0;
}
