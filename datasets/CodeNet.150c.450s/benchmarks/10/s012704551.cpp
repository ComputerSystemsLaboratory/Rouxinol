#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n, people[4][3][10] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        people[b-1][f-1][r-1] += v;
    }

    for (int b = 0; b < 4; b++) {
        for (int f = 0; f < 3; f++) {
            for (int r = 0; r < 10; r++) {
                cout << " " << people[b][f][r];
            }
            cout << endl;
        }

        if (b < 3) printf("####################\n");
    }
}