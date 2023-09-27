#include<iostream>
#include<math.h>
#include <string>
#include <stack>
#include<stdio.h>
#include <queue> 
#include <functional>
#define rep(i,n) for (int i=0; i < (int)(n); i++)

using namespace std;

int main(){
	
	stack<int> st; // スタックを宣言＋初期化
	
	int i,j,k;
	int arr[100];
	string str;
	stack<int> intStack; // 整数値を格納するスタックを宣言
    stack<string> strStack; // 文字列を格納するスタックを宣言	
	queue<int> ique; // 整数値を格納するキューを宣言
	
	while(1){
		int a=0,b=0,c=0,d=0,e=0,num;
	cin >> num;
	
	if (num==0) return 0 ;
	
	rep(i , num){
		
		cin >>  a >> b ;
		
		if(a < b ) d += a + b;
		else if(b < a) c+= a+ b;
		else{
			c+= a;
			 d+=a;
		}
		 
	}
	
	cout << c << " " << d << endl;
	}
		
	return 0;
		
}