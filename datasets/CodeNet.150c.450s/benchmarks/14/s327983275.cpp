#include<iostream>
using namespace std;
 
bool hasThree( int n ) {
    if (n == 0)
        return false;
    if (n % 10 == 3)
        return true;
    return hasThree( n / 10 );
}
 
   
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            cout << ' ' << i;
        else if (hasThree( i ))
            cout << ' ' << i;
    }
    cout << endl;
}