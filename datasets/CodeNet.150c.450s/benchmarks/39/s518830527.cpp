#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, area, frame;
    cin >> a >> b;
    area = a * b;
    frame = a * 2 + b * 2;
    cout << area << " " << frame << endl;
}