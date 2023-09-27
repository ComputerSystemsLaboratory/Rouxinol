#include    <iostream>

using namespace std;

int main() {
    int a, b, c, sum = 0;
    
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++)
        sum += (c % i == 0) ? 1 : 0;
    
    cout << sum << endl;

    return 0;
}
