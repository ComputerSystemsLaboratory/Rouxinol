#include <stack>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	stack<int> a;
	int d;
	
	while(cin>>d){
		if(d==0) {
			cout<<a.top()<<endl;
			a.pop();
		}
			else a.push(d);
	}

	
}