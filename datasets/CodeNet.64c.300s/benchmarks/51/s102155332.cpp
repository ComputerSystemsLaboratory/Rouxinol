#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long fact = 1;
    if (n!=0){
        for (int i=1; i<=n; i++){
            fact = fact * i;
        }
    }
    cout << fact << endl;
    return 0;
}