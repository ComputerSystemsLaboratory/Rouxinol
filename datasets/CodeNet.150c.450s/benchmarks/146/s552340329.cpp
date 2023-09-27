#include <iostream>
using namespace std;

int main() {
	int N;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> N;
    for (int n = 0; n != N; ++n) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if ((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}