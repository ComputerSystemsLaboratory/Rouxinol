#include<iostream>
using namespace std;

int f(int x){
	return (x * x);
}

int main(){
	int d, x, ans;
	while(cin >>d){
		ans = 0;
		for(int i = 1; (i * d) <= (600 - d); i++){
			x = i * d;
			ans += d * f(x);
		}
		
		cout <<ans<<endl;
	}
	
	return 0;
}