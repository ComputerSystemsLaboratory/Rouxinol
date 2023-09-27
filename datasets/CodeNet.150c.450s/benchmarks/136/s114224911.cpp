#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	while (cin >> a >> b){
		int g=__gcd(a,b);
		int l=(a/g)*b;
		cout << g << " " << l << endl; 
	}
	return 0;
}