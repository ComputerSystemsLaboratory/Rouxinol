#include <iostream>
using namespace std;

int main(){
	long long int answer;
	int n;
	cin >> n;
	answer = 1;
	for(int i =1; i<=n;i++)
		answer = answer * (long long int)i;
	cout << answer << endl;
	return 0;
}