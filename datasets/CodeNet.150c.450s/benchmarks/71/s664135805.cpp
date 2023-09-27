/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008&lang=jp*/

#include <iostream>

using namespace std;

int main(){
    int n;

    while(cin >> n) {
        int r = 0;
        for (int i = 0; i < n + 1 && i < 10; ++i) {
            for (int j = 0; i + j < n + 1 && j < 10; ++j) {
                for (int k = 0; i + j + k < n + 1 && k < 10; ++k) {
                    if (n < i + j + k + 10) {
                        r++;
                    }
                }
            }
        }
        cout << r << endl;
    }
    return 0;
}