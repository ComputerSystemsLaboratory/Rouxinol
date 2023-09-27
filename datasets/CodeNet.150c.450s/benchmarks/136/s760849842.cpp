#include<iostream>

using namespace std;

int main(){
    long a, b;
    while (cin >> a >> b)
    {
        long A = a, B = b;
        while (a != b)
        {
            if (a > b){
                a = a - b;
            }
            else{
                b = b - a;
            }
        }
        long gcd = A / a*B;
        cout << a << " " << gcd << endl;
    }

    return 0;
}