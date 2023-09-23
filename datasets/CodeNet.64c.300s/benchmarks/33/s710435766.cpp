#include <iostream>
using namespace std;

void solve(int a,int b,char c){
	if(c=='+'){
		cout<<a+b<<endl;
	}
	else if(c=='-'){
		cout<<a-b<<endl;
	}
	else if(c=='*'){
		cout<<a*b<<endl;
	}
	else{
		cout<<a/b<<endl;
	}
}

int main() {
	// your code goes here
	int a,b;
	char c;
	cin>>a>>c>>b;
	while(c!='?'){
		solve(a,b,c);
		cin>>a>>c>>b;
	}
	return 0;
}