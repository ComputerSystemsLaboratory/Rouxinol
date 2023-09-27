#include<iostream>
using namespace std;

#define maxn 100000

int main(){
	int n = 0;   
	int fra[maxn];
	
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> fra[i];
		
	for(int i = n - 1; i >= 0; i--){
		cout << fra[i];
		if(i > 0)
			cout << ' ';
	}
	cout << endl;
	 
	return 0;
}
	