#include<iostream>
using namespace std;
 
int main()
{
    int x, y;
    while (cin >> x >> y) {
        if (x == 0 && y ==0)return 0;
        if(x>y)
        swap(x, y);
        cout << x << ' ' << y<<endl;
    }
}
