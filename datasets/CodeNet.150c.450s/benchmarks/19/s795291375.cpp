#include<iostream>
using namespace std;

void swap(int &x, int &y);

void swap(int &x, int &y)
{
    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }
}
int main()
{
    for ( ; ; ) {
        int x, y;
        cin >> x >> y;
        if ((x == 0) && y == 0)
            break;
        swap(x, y);
        cout << x << " " << y << endl;
    }
    return 0;
}