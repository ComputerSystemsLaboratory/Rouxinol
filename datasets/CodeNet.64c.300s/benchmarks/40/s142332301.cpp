#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int change = 'a' - 'A';
    string str;

    getline( cin, str );                                             //空白を含めて一行まるまる読み込む

        for( int i = 0; i < str.size(); i++ )
        {
            if( str[i] >= 'A' && str[i] <= 'Z' )                     //ASCIIコードではA~Z,記号,a ~ z,記号の順に並んでいる
                str[i] += change;
            else if( str[i] >= 'a' && str[i] <= 'z' )
                str[i] -= change;
            else;
        }

    cout << str << endl;

    return 0;
}
