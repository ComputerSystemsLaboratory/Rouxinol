#include <iostream>
#include <string>

using namespace std;

int ctoi(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    return 0;
}

int main() {
    string x;
    while(true) {
        cin >> x;
        if(x == "0") return 0;
 
        long sum = 0;
        int p = 0;
        if(x[0] == '-') p = 1;
        for(int i=p; i < x.size(); i++) {
            int x_int = ctoi(x[i]);
            //cout << "x_int: " << x_int << endl;
            sum += x_int;
        }
        cout << sum << endl;
    }
}
