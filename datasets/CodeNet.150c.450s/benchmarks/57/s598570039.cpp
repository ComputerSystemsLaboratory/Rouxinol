#include<iostream>
 using namespace std;

int main(){

 int a, b ;
 char op ;

 	for (int i=1; i<=10000; i=i+1 )
 	{
 	cin >>a >> op >> b ;

         if ( op == '+' ){
         cout<<a + b << endl;// 和
         } else if ( op == '-' ){
         cout<<a - b << endl;// 差
         } else if ( op == '*' ){
         cout<<a * b << endl;// 積
         } else if ( op == '/' ){
         cout<<a / b << endl;// 商
         } else {
         break; // 終了
         }


 	}

 return 0;
 }
