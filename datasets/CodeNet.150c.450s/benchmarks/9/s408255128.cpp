#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int b,c;
	for(int i=0;;i++){
		cin>>a;
		if(a=="-")break;
		cin>>b;
		for(int j=0;j<b;j++){
			cin>>c;
			a=a+a.substr(0,c);
			a=a.erase(0,c);
		}
	cout <<a<<endl;
	}
	return 0;
}