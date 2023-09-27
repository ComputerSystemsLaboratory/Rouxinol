#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, s;
    while(1) {
        cin >> x >> y;
        if (x==0 && y==0)
        {
            break;
        }
        if (x>y)
        {
            s = x;
            x = y;
            y = s;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}