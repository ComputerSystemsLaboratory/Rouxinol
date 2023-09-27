#include <iostream>
#include <string>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int main() {
    while (true) {
        string x;
        cin >> x;
        if (x == "0")return 0;
        int sum = 0;
        rep(i, x.size()) {
            string n;
            n += x[i];
            int a = stoi(n);
            sum += a;
        }
        cout << sum << endl;
    }
}
