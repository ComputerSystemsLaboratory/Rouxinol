//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C&lang=jp

#include<iostream>
 using namespace std;

int main(){
	int x[3000];
    int y[3000]; 
    int exchange; //xとyを交換するときに一時的に使う変数

 	for (int i=1; i<=3000; i=i+1 )
 	{
 	cin >> x[i] >>y[i] ;

		if( x[i] == 0 )
        {
            if( y[i] == 0 )
            {
            break; //x[i]とy[i]の両方が0なら、forループから抜ける。
            }else{
            //x[i]のみ0の場合。forループから抜けない。
            }

        }else{
        // x[i]が0でない場合。forループから抜けない。
        }

        if(x[i] > y[i]) //x[i]がy[i]より大きい場合は、x[i]とy[i]を入れ替える。
         {
        exchange=x[i];
          x[i]=y[i];
          y[i]=exchange;
         }else{
        // そうでなければ、何もしない。
        }

    cout<< x[i] <<" "<< y[i] << endl;
    }
    
 return 0;
 }
