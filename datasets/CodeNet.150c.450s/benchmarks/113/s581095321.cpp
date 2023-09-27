#include<iostream>
using namespace std;

int main() {
    int a=1,i=0,x=1;
    while (1) {
        cin >> a;
        if (a == 0)break;
            i = i + 1;
            cout << "Case " << i << ": " << a << endl;
    }
    return 0;
}