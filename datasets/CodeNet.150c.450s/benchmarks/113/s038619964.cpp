#include <iostream>
using namespace std;

int main() {
    int i=1,n = 0;
    cin >> n;
    while(n != 0) {
        cout << "Case " << i << ": " << n << endl;
        cin >> n;
        i++;
    }
    return 0;
}