#include<iostream>
#include<string>
using namespace std;

void shuffle( string& s )
{
    char temp = s[0];

    for( int i = 0; i < s.size() - 1; i++ )
    {
        s[i] = s[i+1];
    }
    s[s.size()-1] = temp;
}

int main() 
{
    string str;                 //入力文字
    int m;                      //シャッフル回数
    int h;                      //下からh何枚

    while( cin >> str )
    {
        if( str == "-" )
            break;
        
        cin >> m;

        for ( int i = 0; i < m; i++)
        {
            cin >> h;
            for( int i = 0; i < h; i++ )
            {
                shuffle(str);
            }
        }
        cout << str << endl;
    }
    return 0;
}
