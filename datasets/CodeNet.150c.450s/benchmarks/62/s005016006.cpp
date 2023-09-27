#include<iostream>
using namespace std;

void change( int& x, int& y )
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b,c;
    int tmp;

    cin >> a >> b >> c;

    if( a > b)
        change( a, b );
    if( a > c )
        change( a , c );
    if( b > c)
        change( b ,c );
    
    cout << a << " " << b << " " << c << endl;

    return 0; 
}
