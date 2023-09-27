#include <iostream>
#include <sstream>

using namespace std;

int main(void) {
    int num;
    cin >> num;
    
    int data[4][3][10] = {};
    for (int i = 0; i < num; i++) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        data[b - 1][f - 1][r - 1] += v;
    }
    
    for (int b = 1; b <= 4; b++) {
        if (b != 1) cout << "####################" << endl;
        
        for (int f = 1; f <= 3; f++) {
            ostringstream oss;
            for (int r = 1; r <= 10; r++) {
                oss << " " << data[b - 1][f - 1][r - 1];
            }
            
            cout << oss.str() << endl;
        }
    }

}