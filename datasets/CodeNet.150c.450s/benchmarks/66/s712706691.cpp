#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, m;
    string cipher[256], t;
    bool b = 0;

    cin >> n;

    for( int i = 0; i < n; i++ )
        cin >> cipher[i];

    cin >> m;

    for( int i = 0; i < m; i++ )
    {
        cin >> t;
        bool judge = false;
        for( int j = 0; j < n; j++ )
            if( t == cipher[j] )
            {
                if( b == 0 )
                    cout << "Opened by " << t << endl;
                else
                    cout << "Closed by " << t << endl;
                b = !b;
                judge = true;
            }
        if( !judge )
            cout << "Unknown " << t << endl;
    }
    
    return 0;
}
