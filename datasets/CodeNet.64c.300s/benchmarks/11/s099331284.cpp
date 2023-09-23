#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int resA,resB,resC;
    resA = a / 3600;
    resB = a % 3600 / 60;
    resC = a % 3600 % 60;
    cout << resA << ":" << resB << ":" << resC << endl;
    return 0;
}