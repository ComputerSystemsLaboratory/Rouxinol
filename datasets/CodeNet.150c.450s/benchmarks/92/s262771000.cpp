#include <iostream>
int digit(int);
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b){
        cout << digit(a + b) <<endl;
    }
}

int digit(int n){
    if (n == 0) return 1;
    int i;
    for (i = 0; n > 0;i++){
        n = n / 10;
    }
    return i;
}