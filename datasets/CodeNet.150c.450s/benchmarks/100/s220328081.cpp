#include <iostream>

using namespace std;

int main(){
	long long int list[21];
	list[0]=1;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
		list[i]=list[i-1]*i;
	cout << list[n] << endl;
	return 0;
}