#include<iostream>
using namespace std;

int main()
{

    int a, b, c;
    int num = 0;

    cin >> num;

    for( int i = 0; i < num; i++)
    {
        cin >> a >> b >> c;

        if( a >= b && a >= c )
        {
            if(a*a == b*b + c*c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else if( b >= c )
        {
            if(b*b == a*a + c*c)
            {
                cout << "YES" << endl;
            }
                        
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            if(c*c == a*a + b*b)
            {
                cout << "YES" << endl;
            }
                        
            else
            {
                cout << "NO" << endl;
            }
        }

    }   


    return 0;
}
