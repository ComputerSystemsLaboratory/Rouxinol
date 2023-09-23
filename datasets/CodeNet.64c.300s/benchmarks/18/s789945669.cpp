#include <iostream>

using namespace std;

int cases[31];

int main() {
    cases[1] = 1;
    cases[2] = 2;
    cases[3] = 4;
    for (int n = 4; n < 31; n++)
        cases[n] = cases[n-1] + cases[n-2] + cases[n-3];

    int N = 0;
    while (cin>>N && N != 0) {
        cout<<((cases[N]+9)/10+364)/365<<endl;
    }
}