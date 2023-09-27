#include <iostream>
using namespace std;

void replace(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortValue(int a, int b, int c)
{
    if (a > c)  replace(a, c);  // ?????????. 
    if (a > b)  replace(a, b);
    if (b > c)  replace(b, c);

    cout << a << " " << b << " " << c << endl;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    sortValue(a, b, c);
    
    return 0;
}