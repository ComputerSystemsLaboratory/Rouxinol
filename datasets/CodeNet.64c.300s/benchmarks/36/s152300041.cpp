#include <iostream>
using namespace std;
void swapdomya(int* x, int* y);

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a > b) swapdomya(&a, &b);
    if(b > c) swapdomya(&b, &c);
    if(a > b) swapdomya(&a, &b);

    cout << a << " " << b << " " << c << endl;

    return 0;
}

void swapdomya(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}