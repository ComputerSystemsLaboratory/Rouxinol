#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace {
    class Dice {
    private:
        int n1;
        int n2;
        int n3;
        int n4;
        int n5;
        int n6;
    public:
        Dice(int _n1, int _n2, int _n3, int _n4, int _n5, int _n6):
            n1(_n1), n2(_n2), n3(_n3), n4(_n4), n5(_n5), n6(_n6) {}
        ~Dice() = default;

        int right(int top, int front) const {
            vector<int> f = {top, front};
            vector<int> r = {front, top};

            vector<int> v1{n1, n2, n6, n5, n1};
            if (v1.end() != search(v1.begin(), v1.end(), f.begin(), f.end())) {
                return n3;
            }
            if (v1.end() != search(v1.begin(), v1.end(), r.begin(), r.end())) {
                return n4;
            }


            vector<int> v2{n1, n3, n6, n4, n1};
            if (v2.end() != search(v2.begin(), v2.end(), f.begin(), f.end())) {
                return n5;
            }
            if (v2.end() != search(v2.begin(), v2.end(), r.begin(), r.end())) {
                return n2;
            }

            vector<int> v3{n2, n3, n5, n4, n2};
            if (v3.end() != search(v3.begin(), v3.end(), f.begin(), f.end())) {
                return n1;
            }
            if (v3.end() != search(v3.begin(), v3.end(), r.begin(), r.end())) {
                return n6;
            }
            return -1;
        }
    };
}

int main() {
    int n1,n2,n3,n4,n5,n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    Dice d(n1,n2,n3,n4,n5,n6);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int top, front;
        cin >> top >> front;

        cout << d.right(top, front) << endl;
    }

    return 0;
}