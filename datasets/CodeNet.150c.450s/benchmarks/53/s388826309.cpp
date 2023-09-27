#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

void Factorize(int n,vector<int> &result){
	int amari;
	int i=2;
	int N=n;
	while(i<=sqrt(N)){
		amari=n%i;
		if(amari){
			i++;
		}else{
			n=n/i;
			result.push_back(i);
		}
	}
	if(n!=1){
		result.push_back(n);
	}
	return;
}

int main(){
	int n;
	cin >> n ;
	vector<int> result;
	Factorize(n,result);
	
	cout << n <<":";
	for (int i=0;i<result.size();i++){
		cout << " " << result[i];
	}
	cout << endl;
	return 0;
}