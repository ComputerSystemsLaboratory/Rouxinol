#include<iostream>

using namespace std;


int main(){
	
	int n;
	long long factor = 1;
	
	cin >> n;
	
	for(int i=2;i<=n;i++)
	factor *= i;
	
	cout << factor << "\n";
    return 0;
}
