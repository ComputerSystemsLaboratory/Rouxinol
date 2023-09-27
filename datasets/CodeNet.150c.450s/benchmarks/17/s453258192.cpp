#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int n[4];
	for(int i = 0; i < 5; ++i)
		cin >> n[i]; 
	sort(n, n + 5, greater<int>());
	for(int i = 0; i < 5; ++i){
		if(i == 4)
			cout << n[i] << endl;
		else
			cout << n[i] << " ";
	}
	return 0;
}