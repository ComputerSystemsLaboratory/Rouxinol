#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b,(a!=0||b!=0)){
		if(a>b)
			swap(a,b);
		cout << a << " " << b << endl;
	}
return 0;
}