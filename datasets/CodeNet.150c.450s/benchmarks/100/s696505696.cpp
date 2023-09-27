#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long i,s=1;
	for(i=1;i<=n;i=i+1){
		s=s*i;
	}
	cout<<s<<endl;
	return 0;
}