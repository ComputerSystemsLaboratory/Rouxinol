#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

typedef long long ll;
using namespace std;

void solver() {
    int n;
    int money = 100000;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        money *= 1.05;
        if (money % 1000 != 0) {
            money = money - (money % 1000);
            money += 1000;
        }
    }
    cout << money << endl;
}

int main() {
    solver();
    return 0;
}