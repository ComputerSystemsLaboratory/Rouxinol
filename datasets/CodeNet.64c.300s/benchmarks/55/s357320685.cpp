#include<iostream>
using namespace std;
int main() {
    int x;
    int count = 1;
    while (1) {
        cin >> x;
        if (x==0) break;
        cout << "Case " << count << ": " << x << endl; 
        count ++;
    }
    return 0;
}
