#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[20];
	size_t n;
	cin>>a;
	n=strlen(a);
	for(int i=n-1 ; i>=0 ; i--){
		cout << a[i] ;
	}
	cout << endl;
	return 0;
}