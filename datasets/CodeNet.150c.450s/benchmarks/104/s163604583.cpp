#include<iostream>
using namespace std;


void exchange( int& x, int& y )
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int w, n;                           //w縦線の数, n横線の数

    cin >> w;
    cin >> n;

    int vline[w];                       //縦線を格納する配列

    for( int i = 0; i < w; i++ )        //引数0から1,2,3という数字が入る
    {
        vline[i] = i + 1;
    }

    for( int i = 0; i < n; i++ )
    {
        int from, to;                   //fromからtoへ。int型のみ受け付けたい。
        char extra;                      //','は余分な入力

        cin >> from >> extra >> to;

        exchange( vline[from-1]  , vline[to-1] );
    }

    for( int i = 0; i < w; i++)
        cout << vline[i] << endl;

    return 0;

}
