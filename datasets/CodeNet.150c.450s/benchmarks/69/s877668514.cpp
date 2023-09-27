#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define range(i,b) rep(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
	int a,b;
	int n;
	int input;
	bool check;

	while(cin >> n){
		range(i,n){
			a = b = 0;
			check = true;
			range(i,10){
				cin >> input;
				if(input > a && input > b){
					if(a > b)
						a = input;
					else
						b = input;
				}else if(input > a){
					a = input;
				}else if(input > b){
					b = input;
				}else{
					check = false;
				}
			}
			if(check) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}