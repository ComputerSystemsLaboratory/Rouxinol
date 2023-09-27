#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string w, t;                                                        //一つの単語w, 文章に含まれる文章t
    bool judge;                                                         //YES, NOを判定する変数
    int count = 0;                                                      //一致した回数を数える
    int trans = 'a' - 'A';                                              //大文字、小文字の変換

    cin >> w;

    while( cin >> t )
    {
        if( t == "END_OF_TEXT" )
            break;
        if( t.size() != w.size() );
        
        else
        {
            for( int i = 0; i < w.size(); i++ )
            {
                if( t[i] != w[i] )
                {
                    if( t[i] != w[i] - trans )
                    {
                        judge = false;
                        break;
                    }
                    else
                        judge = true;
                }
                else
                    judge = true;
            }

            if( judge )
                count++;
        }
    } 
    cout << count << endl;

    return 0;
}
