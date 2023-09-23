#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, num, digit;
    
    while(cin >> a)
    {
        cin >> b;
        num = a + b;
        digit = 0;
        while(num != 0)
        {
            num = num / 10;
            digit++;
        }
        cout << digit << endl;
    }
    return 0;
}