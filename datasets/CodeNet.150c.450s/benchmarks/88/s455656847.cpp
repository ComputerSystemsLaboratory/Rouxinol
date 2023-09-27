#include <iostream>

using namespace std;

int main() {
    int h_input, w_input, d_min;
    while (true) {
        bool has_output = false;
        cin >> h_input >> w_input;
        if (h_input == 0) {
            break;
        }
        d_min = h_input*h_input+w_input*w_input;
        for (int d=d_min; !has_output; d++) {
            int h_begin = (d_min==d? h_input+1: 1);
            for (int h=h_begin; 2*h*h<d; h++) {
                int w;
                for (w=h+1; h*h+w*w<d; w++);
                if (h*h+w*w == d) {
                    cout << h << ' ' << w << endl;
                    has_output = true;
                    break;
                }
            }
        }
    }
}