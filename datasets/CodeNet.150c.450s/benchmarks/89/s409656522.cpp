#include<iostream>
#include<vector>

using namespace std;

vector<int> ans;
bool isPrime(int num);

int main(){
	while(1){
		int a,b,n;
		cin >> a >> b >> n;
		if(a + b + n == 0) break;
		
		int count = 0;
		int nn = a;
		if(isPrime(nn)) count++;
		while(count < n){
			nn += b;
			if(isPrime(nn))count++;
		}
		ans.push_back(nn);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	
	return 0;
}

bool isPrime(int num){
	bool p = true;
	if(num == 1) return false;
	for(int i = 2;i < num;i++){
		if(num > 5 && i*i > num) break;
		if(num % i == 0){ p = false; break;}
	}
	return p;
}