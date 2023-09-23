
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D&lang=jp


#include<iostream>
 using namespace std;

int main(){

 int n , a[10000] ;
 long min =0  , max = 0 , sum = 0 ;

 cin >> n ;

//初期値の処理
 cin >>a[1] ;
 min = a[1] ; max = a[1] ; sum = a[1] ;

        for (int i = 2 ; i <= n ; i = i + 1 )
 	{
 	cin >>a[i] ;

                if ( min > a[i] ){ //最小値の更新処理
                min = a[i] ;
                }else{
                //特に何もしない
                }

                if ( max < a[i] ){ //最大値の更新処理
                max = a[i] ;
                }else{
                //特に何もしない
                }
         
                sum = sum + a[i] ;

 	}

 cout << min << " " << max << " " << sum << endl; //結果の出力

 return 0;
 }
