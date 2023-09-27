#include <iostream>
#include <set>
using namespace std;

int main() {
    int a1, a2, a3, a4, b1, b2, b3, b4;
    set<int> setA, setB;
    while (cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4) {
        int hit = 0, blow = 0;
        if (a1 == b1) {
            hit++;
        }
        else {
            setA.insert(a1);
            setB.insert(b1);
        }
        if (a2 == b2) {
            hit++;
        }
        else {
            setA.insert(a2);
            setB.insert(b2);
        }
        if (a3 == b3) {
            hit++;
        }
        else {
            setA.insert(a3);
            setB.insert(b3);
        }
        if (a4 == b4) {
            hit++;
        }
        else {
            setA.insert(a4);
            setB.insert(b4);
        }

        for (int i = 1; i <= 9; ++i) {
            if (setA.count(i) && setB.count(i)) {
                ++blow;
            }
        }

        cout << hit << " " << blow << endl;
        setA.clear();
        setB.clear();
    }
}