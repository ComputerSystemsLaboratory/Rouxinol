#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string s, p;                                                       //Sが円になっている文字列、Pが探す文字列
    bool judge;                                                        //YES, NOを判定する変数

    cin >> s;
    cin >> p;

    for( int i = 0; i < s.size(); i++ )
    {
        for( int j = i, t = 0; j < p.size() + i; j++, t++ )            
        {
            if( s[j % s.size()] != p[t] )                              //falseならbreakする
            {
                judge = false;
                break;
            }
            else                                                       //一通り一致したらtrueが入っているので
                judge = true;       
        }
        if( judge )                                                    //ループを抜けて結果を出力
            break;
    }

    if( judge )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
