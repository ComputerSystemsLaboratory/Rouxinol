#include<iostream>
using namespace std;

int main() 
{
    int n;
    bool cards[4][13];                      //マークを4通りの数に対応
    char mark;                              //実際の入力はcharで受付け
    int num;                                //カード番号

    for( int i = 0; i < 4; i++ )            //falseで初期化
        for( int j = 0; j < 13; j++)
            cards[i][j] = false;       

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> mark >> num;                 //入力

        switch(mark)                        //用意した配列にマークと数字を振っていく
        {
            case 'S':                       //SHCDそれぞれ0123に対応
                cards[0][num-1] = true;     //num-1は13なら要素12の配列にある
                break;
            case 'H':
                cards[1][num-1] = true;
                break;
            case 'C':
                cards[2][num-1] = true;
                break;                
            case 'D':
                cards[3][num-1] = true;
                break;
        }
    }

    /*足りないカードがfalseとして格納されている配列を順に表示(マークと数字に変換して)させる*/
    for( int i = 0; i < 4; i++ )
        for( int j = 0; j < 13; j++ )
            if( cards[i][j] == false)   //falseならカードが無い
                switch(i)                        
                {
                    case 0:                      
                        cout << "S " << j + 1 << endl;
                        break;
                    case 1:
                        cout << "H " << j + 1 << endl;
                        break;
                    case 2:
                        cout << "C " << j + 1 << endl;
                        break;                
                    case 3:
                        cout << "D " << j + 1 << endl;
                        break;
                }


    return 0;
}
