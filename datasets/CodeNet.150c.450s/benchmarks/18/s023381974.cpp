#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	long a = 100000;
	for(int i=0;i<n;i++){
		a = (a+a/20);
		if(a%1000!=0) a = (a/1000+1)*1000;
	}
	cout << a << endl;
}