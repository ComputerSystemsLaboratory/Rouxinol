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
	
	int a,b,c,d,e,num;
	int i,j,k;
	int arr[100];
	int arr2[100][100];
	char x,y,z;
	char crr[100];
	char crr2[100][100];
	string str2;
	string str;
	stack<int> istk; // 整数値を格納するスタックを宣言
    stack<string> sstk; // 文字列を格納するスタックを宣言	
	queue<int> ique; // 整数値を格納するキューを宣言
    queue<string> sque; // 文字列を格納するキューを宣言

	
	
	cin >> num;
	
	rep(i , num){
		
		
		cin >> str;
		

		
		j = 0;
		
		
		while(1){
			
			x = NULL;
			
			if(str[j] == NULL) break;
		
			switch(str[j]){
				
				case '0':
				
				j=j+1;
					break;
					
					
	
				case '1':
				
				
				x = '.';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == '.' ) x = ',';
					else if(x == ',' ) x = '!';
					else if(x == '!' ) x = '?';
					else if(x == '?' ) x = ' ';
					else x = '.';
					j = j+1;
				}
				j = j+1;
					break;
					
				case '2':
				
				
				x = 'a';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'a' ) x = 'b';
					else if(x == 'b' ) x = 'c';
					else x = 'a';
					j = j+1;
				}
				j = j+1;
					break;
				case '3':
				
				
				x = 'd';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'd' ) x = 'e';
					else if(x == 'e' ) x = 'f';
					else x = 'd';
					j = j+1;
				}
				j = j+1;
					break;
				case '4':
				
				
				x = 'g';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'g' ) x = 'h';
					else if(x == 'h' ) x = 'i';
					else x = 'g';
					j = j+1;
				}
				j = j+1;
					break;
				case '5':
				
				
				x = 'j';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'j' ) x = 'k';
					else if(x == 'k' ) x = 'l';
					else x = 'j';
					j = j+1;
				}
				j = j+1;
					break;
				case '6':
				
				
				x = 'm';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'm' ) x = 'n';
					else if(x == 'n' ) x = 'o';
					else x = 'm';
					j = j+1;
				}
				j = j+1;
					break;
				case '7':
				
				
				x = 'p';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'p' ) x = 'q';
					else if(x == 'q' ) x = 'r';
					else if(x == 'r' ) x = 's';
					else x = 'p';
					j = j+1;
				}
				j = j+1;
					break;
				case '8':
				
				
				x = 't';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 't' ) x = 'u';
					else if(x == 'u' ) x = 'v';
					else x = 't';
					j = j+1;
				}
				j = j+1;
					break;
				case '9':
				
				
				x = 'w';
				j = j+1;
				while(1){
					if(str[j] == '0') break;
					if(x == 'w' ) x = 'x';
					else if(x == 'x' ) x = 'y';
					else if(x == 'y' ) x = 'z';
					else x = 'w';
					j = j+1;
				}
				j = j+1;
					break;

			}
			
//			str2[k] = x;
//			k = k+1;
			if(x == NULL ) continue; 
			cout << x;		

				
				
		}
		
		cout << endl;
		
		
		
	}
		
	return 0;
		
}