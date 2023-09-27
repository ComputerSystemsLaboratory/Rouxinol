#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string text;
    int alpha[100] = {};                                        //要素がアスキー文字の整数に対応.0で初期化。
    int trans = 'a' - 'A';                                      //大文字から小文字への変換

    while( cin >> text )
    {
        for( int i = 0; i < text.size(); i++ )
        {
            for( int j = 65; j <= 90; j++ )                     //65~90はA~Z
            {
                if( text[i] == j || text[i] == j + trans)
                    alpha[j]++;
            }
        }
    }

    for( int i = 65; i <= 90; i++ )
    {
        cout << (char)(i + trans) << " : " << alpha[i] << endl;
    }
    return 0;
}
