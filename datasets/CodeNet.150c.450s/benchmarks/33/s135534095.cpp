#include<iostream>
#include<algorithm>
using namespace std;

int tax(int price, int rate) {
    return price * (100 + rate) / 100;
}

int main() {
    int x, y, s;
    while(cin >> x >> y >> s, x | y | s) {
        int answer = 0;
        for(int i = 1; i < 1000; ++i) for(int j = 1; j < 1000; ++j) {
            if(tax(i, x) + tax(j, x) == s) answer = max(answer, tax(i, y) + tax(j, y));
        }
        cout << answer << endl;
    }
}