#include<iostream>
#include<string>
using namespace std;

//a文字目からb文字目までを出力する関数
void print( int a, int b, string& s )
{
    for( int i = a; i <= b; i++ )
        cout << s[i];
    cout << endl;
}

//a文字目からb文字目までを反対にする関数
void reverse( int a, int b, string& s )
{
    for( int i = a, j = b, k = 0; k < (b - a + 1) / 2; i++, j--, k++ )
    {
        char temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

//a文字目からb文字目までをpに置き換える関数
void replace( int a, int b, string& s, string p )
{
    for( int i = a, j = 0; i <= b; i++, j++ )
        s[i] = p[j];
}

int main() 
{
    string str, order,rep;
    int q;
    int _a, _b;

    cin >> str;
    cin >> q;

    for( int t = 0; t < q; t++ )
    {
        cin >> order;

        if( order == "replace" )
        {
            cin >> _a >> _b >> rep;
            replace( _a, _b, str, rep );
        }
        else if( order == "reverse" )
        {
            cin >> _a >> _b;
            reverse( _a, _b, str );
        }
        else
        {
            cin >> _a >> _b;
            print( _a, _b, str );
        }
    }

    return 0;
}
