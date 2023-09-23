
// 再帰関数を利用して整数n個の和でsを作れたら１を返す
// 出来ないときは０を返す


#include <iostream>
 
using namespace std;

int rec( int s , int n , int num ){

  if( s < 0 )return 0;                    //整数n個の和でsを作ることは不可能
  if( s == 0 && n == 0 )return 1;         //整数n個の和でsを作ることが出来た
                                          //この問題は数の順番を考慮しなくて
                                          //いいからiに num + 1を入れてよい  
  int ans = 0;
  for( int i = num + 1 ;  i < 10 ; i++ ){ //同じ数字は使えない
    ans += rec( s - i , n - 1 , i );
  }
  return ans;
}


int main(void){

  while(1){

  int n;  int s;
  cin >> n >> s;
  if( n == s && s == 0 )break;

  cout << rec( s, n , -1 ) << endl;

  }
 return 0;
}