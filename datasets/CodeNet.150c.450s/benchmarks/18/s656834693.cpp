#include<iostream>
using namespace std;

int main()
{
    int n = 0;                                          //n習慣
    int debt = 100000;                                  //10万借金

    cin >> n;                                           //入力

    for( int i = 0; i < n; i++ )                        //n回繰り返す
    {
        debt = debt * 105 / 100;                             //5%増える
        if( debt % 1000 != 0 )                     //1~999は切り上がる
            debt = ( debt / 1000 + 1 ) * 1000;
    }

    cout << debt << endl;

    return 0;
}
