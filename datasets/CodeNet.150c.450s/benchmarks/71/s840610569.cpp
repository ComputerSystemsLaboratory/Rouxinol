#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int check(int x,int y,int z,int w){

}

int main(){
	int n;
	while(cin >> n){
		int ans=0;
		int a,b,c,d;
		for(a=0;a<=9;a++){
			for(b=0;b<=9;b++){
				for(c=0;c<=9;c++){
					for(d=0;d<=9;d++){
						if( a+b+c+d == n ){
							ans++;
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}