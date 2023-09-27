#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin >> n && n!=0){
		n=1000-n;
		int sum=0;
		int coin[]={500,100,50,10,5,1};
		for(int i=0;i<6;i++)
			while(n>=coin[i]){
				sum++;
				n-=coin[i];
			}
	cout << sum << endl;
	}
	return 0;
}