#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
using namespace std;

int main(){
	int n,i,ans = 100000,a,risi[2];
	cin >> n;
	for(i = 1;n >= i;i++){
		risi[0] =  ans * 0.05;
		risi[1] = risi[0];
		while(risi[1] >= 1000){risi[1] = risi[1] - 1000;}
			if(risi[1] > 0){risi[0] = risi[0] - risi[1] + 1000;}
		ans = ans + risi[0];
	}
	cout << ans << endl;
}