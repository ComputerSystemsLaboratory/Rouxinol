#include<iostream>
using namespace std;

int main() 
{
    int n, x;

    while( cin >> n >> x )
    {
        if( n == 0 && x == 0 )
            break;

        int count = 0;                                      //組み合わせ
        int data[n];

        for( int i = 0; i < n; i++ )                        //1~nの数を格納する配列
            data[i] = i + 1;
        

        for( int i = 0; i <= n - 3; i++ )                    //iがn-3の時、jはn-2、kはn-1の要素を指す
            for( int j = i + 1; j <= n - 2; j++ )
                for( int k = j + 1; k <= n - 1; k++ )
                    if( data[i] + data[j] + data[k] == x )
                        count++;
                        
        cout << count << endl;
    }
    return 0;
}
