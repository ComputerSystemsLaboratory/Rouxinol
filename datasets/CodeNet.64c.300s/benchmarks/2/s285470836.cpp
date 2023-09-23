#include<iostream>
using namespace std;

int main() 
{
    int m = 0, f = 0, r = 0;                                    //中間:m 期末:f 再試:r

    while( cin >> m >> f >> r )
    {
        if( m == -1 && f == -1 && r == -1 )                     //全て-1なら終了
            break;
        
        int sum = m + f;                                        //sum = 中間+期末

        if( m == -1 || f == -1 )
            cout << 'F' << endl;
        
        else if( sum >= 80 )
            cout << 'A' << endl;

        else if( sum >= 65 )
            cout << 'B' << endl;   

        else if( sum >= 50 )
            cout << 'C' << endl;        

        else if( sum >= 30 )
        {
            if( r >= 50)
                cout << 'C' << endl;
            else
                cout << 'D' << endl;
        }

        else
            cout << 'F' << endl;
    }

    return 0;
}
