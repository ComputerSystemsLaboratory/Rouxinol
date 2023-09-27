#include<iostream>
using namespace std;

int main()
{
    int h,m,s;

    int xs;

    cin >> xs;

    h = xs / 3600;
    m = (xs % 3600) / 60;
    s = (xs % 3600) % 60;

    cout << h << ':' << m << ':' << s << endl;

    return 0;
}
