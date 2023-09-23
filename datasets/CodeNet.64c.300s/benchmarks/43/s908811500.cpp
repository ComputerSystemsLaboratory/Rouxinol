#include <iostream>
using namespace std;

int main(void)
{
        int a1, a2, a3, a4, a;
        int b1, b2, b3, b4, b;
        cin >> a1 >> a2 >> a3 >> a4;
        cin >> b1 >> b2 >> b3 >> b4;
        a = a1 + a2 + a3 + a4;
        b = b1 + b2 + b3 + b4;

        if(a <= b){
                cout << b << endl;
        }
        else if(a > b){
                cout << a << endl;
        }

        return (0);
}