#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int d;
	while(scanf("%d", &d) != EOF){
		int ans = 0;
		for(int i=1; i < 600/d; i++){
			ans += d * pow(d*i, 2);
		}
		cout << ans << endl;
	}
}