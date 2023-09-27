#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> x;
	vector<char> op;
	while(1){
		int a,b;
		char o;
		cin>>a;
		cin>>o;
		cin>>b;
		if (o=='?') break;
		x.push_back(a);
		op.push_back(o);
		x.push_back(b);
	}
	for (vector<char>::size_type k=0;k<op.size();k++){
		int ans;
		switch (op[k]){
			case '+':
				ans=x[k*2]+x[k*2+1];
				break;
			case '-':
				ans=x[k*2]-x[k*2+1];
				break;
			case '*':
				ans=x[k*2]*x[k*2+1];
				break;
			case '/':
				ans=x[k*2]/x[k*2+1];
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}