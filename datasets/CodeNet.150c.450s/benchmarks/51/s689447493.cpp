#include<iostream>
using namespace std;

int main()
{
    int a;
    bool s[31];

    for( int i = 0; i < 31; i++ )
        s[i] = false;

    for( int i = 0; i < 28; i++ )
    {    
        cin >> a;
        s[a] = true;
    }

    for( int i = 1; i < 31; i++ )    
        if( s[i] == false )
            cout << i << endl;

    return 0;
}
