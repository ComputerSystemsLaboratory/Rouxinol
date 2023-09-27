#include<iostream>
#include<string>
using namespace std;

class dice
{
private:
    int asp[6];
    string order;
public:
    void setdice( int* j );                         //サイコロの値を格納
    void dice_print();                              //サイコロの値を出力
    void exchange( int& x, int& y );                //サイコロの場所を交換
    void orderX( string x );                        //転がす命令を行う      
    void up_print(){ cout << asp[0] << endl; }              //上面を出力する関数
};

void dice::setdice( int* j )
{
    for( int i = 0; i < 6; i++ )
        asp[i] = j[i];
}

void dice::dice_print()
{
    for( int i = 0; i < 6; i++ )
        cout << asp[i] << " ";
    cout << endl;
}

void dice::exchange( int& x, int& y )
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void dice::orderX( string x )
{

    for( int i = 0; i < x.size(); i++ )
    {

        if( x[i] == 'E')
        {
            exchange( asp[0], asp[2] );
            exchange( asp[0], asp[5] );
            exchange( asp[0], asp[3] );
        }
        else if( x[i] == 'N')
        {
            exchange( asp[0], asp[4] );
            exchange( asp[0], asp[5] );
            exchange( asp[0], asp[1] );
            
        }
        else if( x[i] == 'S')
        {
            exchange( asp[0], asp[1] );
            exchange( asp[0], asp[5] );
            exchange( asp[0], asp[4] );
        }
        else if( x[i] == 'W')
        {
            exchange( asp[0], asp[3] );
            exchange( asp[0], asp[5] );
            exchange( asp[0], asp[2] );
        }
        else{}
    }
}

int main()
{
    int d[6];
    string ord;
    dice dice1;

    for( int i = 0; i < 6; i++ )
        cin >> d[i];
    
    cin >> ord;

    dice1.setdice( d );                 //サイコロの面をセット
    dice1.orderX( ord );                 //命令に従って並び替え
    dice1.up_print();                   //上面出力


    return 0;
}
