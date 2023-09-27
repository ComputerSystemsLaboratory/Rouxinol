#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b){
		if(a<c)
			cout<<b<<" "<<a<<" "<<c<<endl;
		else{
			if(b<c)
				cout<<b<<" "<<c<<" "<<a<<endl;
			else
				cout<<c<<" "<<b<<" "<<a<<endl;
		}
	}
	if(b>a){
		if(b<c)
			cout<<a<<" "<<b<<" "<<c<<endl;
		else{
			if(c<a)
				cout<<c<<" "<<a<<" "<<b<<endl;
			else
				cout<<a<<" "<<c<<" "<<b<<endl;
		}
	}
	return 0;
}