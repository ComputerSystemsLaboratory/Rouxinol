#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	    }
	sort(a,a+5);
	reverse(a,a+5);
	cout<<a[0];
	for(int j=1;j<5;j++){
		cout<<" "<<a[j];
	    }
	cout<<endl;
	return 0;
	}
