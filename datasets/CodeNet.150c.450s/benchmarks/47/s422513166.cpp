#include <iostream>

using namespace std;

int main(void) {
    int width, height, x, y, r;
    cin >> width >> height >> x >> y >> r;

    string answer;    
    if (x - r < 0) {
        // left error
        answer = "No";
    } else if (x + r > width ) {
        // right error
        answer = "No";
    } else if (y - r < 0) {
        // down error
        answer = "No";
    } else if (y + r > height) {
        // up error
        answer = "No";
    } else {
        // ok
        answer = "Yes";
    }
    
    cout << answer << endl;
    
    return 0;
}