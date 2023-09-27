#include <iostream>
#include <cmath>
using namespace std;

bool primenumber(int num){
		int sq_num,judge;
		sq_num = sqrt(num);

		if(num == 2) return true;
		if(num % 2 == 0) judge++;
		for(int i = 2;i <= sq_num;i++){
				if(num % i == 0) judge++;
		}
		if(judge == 0){
				return true;
		}else{
				return false;
		}
}

int main(){
		int n,n_judge,ans = 0;
		cin >> n;
		for(int i = 0;i < n;i++){
				cin >> n_judge;
				if(primenumber(n_judge) == true) ans++;
		}
		cout << ans << endl;
		return 0;
}