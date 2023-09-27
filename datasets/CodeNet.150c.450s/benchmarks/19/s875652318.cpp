#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	for(int i=0;;i++){
		int a,b;
		cin >> a >> b;
		if(a==0 && b==0)break;
		if(a>b)cout << b << " " << a << endl;
		else cout << a << " " << b << endl;
	}
	return 0;
}