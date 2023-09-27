#include <iostream>
#include <string>

using namespace std;

bool compare(int h, int w, int hh, int ww) {  // h, w: Input   hh, ww: search
    int input_rect = h*h + w*w;
    int cmp_rect = hh*hh + ww*ww;

    if(input_rect < cmp_rect) {
        return true;
    }

    if(cmp_rect == input_rect && hh > h) {
        return true;
    }

    return false;
}


int main() {

    while(1) {
        int h, w;
        int ret_h = 151, ret_w = 151;

        cin >> h >> w;
        if(w == 0 && h == 0) {
            break;
        }

        for(int i = 1; i < 151; i++) {
            for(int j = i + 1; j < 151; j++) {
                if (compare(h, w, i, j)) {
                    if (compare(i, j, ret_h, ret_w)) {
                        ret_h = i;
                        ret_w = j;
                    }
                }
            }
        }

        cout << ret_h << " " << ret_w << "\n";
    }
    return 0;

}


