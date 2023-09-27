// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D&lang=jp

#include<iostream>
 using namespace std;

int main(){

    int a , b, c ;
    int yakusuunokosuu = 0 ;

    cin >> a >> b >> c ;

    for (int i = 0; i <= 10000; i=i+1 )
 	{
 	    if ( ( a + i ) > b )
 	    {
        break;
 	    }else{
	        if ( c % ( a + i ) == 0 ) //cがa+iで割り切れる場合
            {
             yakusuunokosuu = yakusuunokosuu + 1 ; //約数の個数を1個増やす
            }else{
            // 何もしない
            }
        }

 	}

    cout<< yakusuunokosuu << endl ;  
    return 0;

}
