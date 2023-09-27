#include <iostream>
using namespace std;

int main() {
	int n;
	int h;
	long s=0;
	while(cin>>n){
		for(h=n;h<600;h+=n){
			s+=h*h*n;
		}
		cout<<s<<endl;
		s=0;
	}
	// your code goes here
	return 0;
}