#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string num;

    while( cin >> num )
    {
        int sum = 0;

        if( num.size() == 1 && num[0] == '0' )        //文字配列の大きさが1かつ値が0なら終了. 0が文字であることに注意
            break;

        for( int i = 0; i < num.size(); i++ )
        {
            int x = num[i] - '0';                   //文字としての数字を、整数型としての数字に変換
            sum += x;   
        }

        cout << sum << endl;
    }

    return 0;
}
